#include <stdio.h>

void sortProcesses(int n, int bt[], int proc[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                temp = proc[i];
                proc[i] = proc[j];
                proc[j] = temp;
            }
        }
    }
}

void findAverageTime(int n, int bt[]) {
    int wt[n], tat[n], proc[n];
    for (int i = 0; i < n; i++) proc[i] = i + 1;
    sortProcesses(n, bt, proc);

    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];

    printf("Processes  Burst Time  Waiting Time  Turn-Around Time\n");
    for (int i = 0; i < n; i++)
        printf(" %d\t\t%d\t\t%d\t\t%d\n", proc[i], bt[i], wt[i], tat[i]);
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