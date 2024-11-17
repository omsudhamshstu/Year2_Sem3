// First-Come, First-Served (FCFS) scheduling is a CPU scheduling algorithm 
// that executes processes in the order they arrive in the ready queue. 
// This approach is simple and easy to implement but can lead to the 
// "convoy effect" where shorter processes wait for longer ones to finish.

#include <stdio.h>

void findWaitingTime(int n, int bt[], int wt[]) {
    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}

void findTurnAroundTime(int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findAverageTime(int n, int bt[]) {
    int wt[n], tat[n];
    findWaitingTime(n, bt, wt);
    findTurnAroundTime(n, bt, wt, tat);

    printf("Processes  Burst Time  Waiting Time  Turn-Around Time\n");
    for (int i = 0; i < n; i++)
        printf(" %d\t\t%d\t\t%d\t\t%d\n", i+1, bt[i], wt[i], tat[i]);
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int bt[n];
    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &bt[i]);

    findAverageTime(n, bt);
    return 0;
}