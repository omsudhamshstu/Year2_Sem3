//? Round Robin scheduling is a CPU scheduling algorithm that assigns a fixed 
//? time quantum to each process in the ready queue in a cyclic order. 
//? This approach ensures that all processes get an equal share of CPU time 
//? and improves response time for short processes.

#include <stdio.h>

void findAverageTime(int n, int bt[], int quantum) {
    int wt[n], tat[n], rem_bt[n];
    for (int i = 0; i < n; i++) rem_bt[i] = bt[i];
    int t = 0;

    while (1) {
        int done = 1;
        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = 0;
                if (rem_bt[i] > quantum) {
                    t += quantum;
                    rem_bt[i] -= quantum;
                } else {
                    t += rem_bt[i];
                    wt[i] = t - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if (done) break;
    }

    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];

    printf("Processes  Burst Time  Waiting Time  Turn-Around Time\n");
    for (int i = 0; i < n; i++)
        printf(" %d\t\t%d\t\t%d\t\t%d\n", i+1, bt[i], wt[i], tat[i]);
}

int main() {
    int n, quantum;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int bt[n];
    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &bt[i]);
    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    findAverageTime(n, bt, quantum);
    return 0;
}