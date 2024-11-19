#include <stdio.h>
#include <stdbool.h>

#define P 5 // Number of processes
#define R 3 // Number of resources

// Function to find if the system is in a safe state
bool isSafe(int processes[], int avail[], int max[][R], int allot[][R]) {
    int need[P][R];
    bool finish[P] = {0};
    int safeSeq[P];
    int work[R];
    int count = 0;

    // Calculate the need matrix
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < R; j++) {
            need[i][j] = max[i][j] - allot[i][j];
        }
    }

    // Initialize the work vector
    for (int i = 0; i < R; i++)
        work[i] = avail[i];

    // Find a safe sequence
    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (!finish[p]) {
                // Check if need <= work
                int j;
                for (j = 0; j < R; j++)
                    if (need[p][j] > work[j])
                        break;

                if (j == R) { // If all resources are allocated
                    for (int k = 0; k < R; k++)
                        work[k] += allot[p][k];
                    safeSeq[count++] = p;
                    finish[p] = 1;
                    found = true;
                }
            }
        }
        if (!found) {
            printf("System is not in a safe state\n");
            return false;
        }
    }

    printf("System is in a safe state.\nSafe sequence is: ");
    for (int i = 0; i < P; i++)
        printf("%d ", safeSeq[i]);
    printf("\n");
    return true;
}

// Main function
int main() {
    int processes[] = {0, 1, 2, 3, 4};

    int avail[] = {3, 3, 2};

    int max[][R] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2},
        {4, 3, 3}
    };

    int allot[][R] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1},
        {0, 0, 2}
    };

    isSafe(processes, avail, max, allot);
    return 0;
}

//? Explanation:
// Input Section: The program takes the number of processes and resources as input, followed by the available resources, the maximum demand of each process, and the current allocation.

// Need Calculation: need[i][j] = maximum[i][j] - allocation[i][j] represents the resources still required by each process to complete.

// Safety Check: The isSafe function checks if the system is in a safe state by attempting to allocate resources to processes and seeing if all processes can finish.

// Output: If the system is in a safe state, it prints the safe sequence; otherwise, it indicates that the system is not in a safe state.

// This code is designed to be easy to follow, focusing on the core logic of the Banker's Algorithm without extra complexity.