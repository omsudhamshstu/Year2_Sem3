#include <stdio.h>

int findOptimal(int pages[], int n, int frames[], int f, int index) {
    int pos = -1, farthest = index;
    for (int i = 0; i < f; i++) {
        int j;
        for (j = index; j < n; j++) {
            if (frames[i] == pages[j]) {
                if (j > farthest) {
                    farthest = j;
                    pos = i;
                }
                break;
            }
        }
        if (j == n) return i;
    }
    return (pos == -1) ? 0 : pos;
}

void Optimal(int pages[], int n, int frames[], int f) {
    int faults = 0;
    for (int i = 0; i < f; i++) frames[i] = -1;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < f; j++) {
            if (frames[j] == pages[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            if (i < f) {
                frames[i] = pages[i];
            } else {
                int pos = findOptimal(pages, n, frames, f, i + 1);
                frames[pos] = pages[i];
            }
            faults++;
        }
    }
    printf("Optimal Page Faults: %d\n", faults);
}

int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frames[3];
    Optimal(pages, n, frames, 3);
    return 0;
}