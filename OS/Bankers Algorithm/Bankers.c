#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 5
#define MAX_RESOURCES 3

int available[MAX_RESOURCES];
int maximum[MAX_PROCESSES][MAX_RESOURCES];
int allocation[MAX_PROCESSES][MAX_RESOURCES];
int need[MAX_PROCESSES][MAX_RESOURCES];

void calculateNeed(int processes, int resources) {
    for (int i = 0; i < processes; i++)
        for (int j = 0; j < resources; j++)
            need[i][j] = maximum[i][j] - allocation[i][j];
}

bool isSafe(int processes, int resources) {
    int work[MAX_RESOURCES];
    bool finish[MAX_PROCESSES] = {false};
    for (int i = 0; i < resources; i++)
        work[i] = available[i];

    int safeSequence[MAX_PROCESSES];
    int count = 0;

    while (count < processes) {
        bool found = false;
        for (int i = 0; i < processes; i++) {
            if (!finish[i]) {
                bool canAllocate = true;
                for (int j = 0; j < resources; j++)
                    if (need[i][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }

                if (canAllocate) {
                    for (int j = 0; j < resources; j++)
                        work[j] += allocation[i][j];
                    safeSequence[count++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }
        if (!found)
            return false;
    }

    printf("System is in a safe state.\nSafe sequence is: ");
    for (int i = 0; i < processes; i++)
        printf("%d ", safeSequence[i]);
    printf("\n");
    return true;
}

int main() {
    int processes, resources;

    printf("Enter the number of processes: ");
    scanf("%d", &processes);

    printf("Enter the number of resources: ");
    scanf("%d", &resources);

    printf("Enter the available resources: ");
    for (int i = 0; i < resources; i++)
        scanf("%d", &available[i]);

    printf("Enter the maximum resources for each process:\n");
    for (int i = 0; i < processes; i++)
        for (int j = 0; j < resources; j++)
            scanf("%d", &maximum[i][j]);

    printf("Enter the allocated resources for each process:\n");
    for (int i = 0; i < processes; i++)
        for (int j = 0; j < resources; j++)
            scanf("%d", &allocation[i][j]);

    calculateNeed(processes, resources);

    if (!isSafe(processes, resources))
        printf("System is not in a safe state.\n");

    return 0;
}

//? Explanation:
// Input Section: The program takes the number of processes and resources as input, followed by the available resources, the maximum demand of each process, and the current allocation.

// Need Calculation: need[i][j] = maximum[i][j] - allocation[i][j] represents the resources still required by each process to complete.

// Safety Check: The isSafe function checks if the system is in a safe state by attempting to allocate resources to processes and seeing if all processes can finish.

// Output: If the system is in a safe state, it prints the safe sequence; otherwise, it indicates that the system is not in a safe state.

// This code is designed to be easy to follow, focusing on the core logic of the Banker's Algorithm without extra complexity.