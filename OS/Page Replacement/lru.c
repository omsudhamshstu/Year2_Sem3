#include <stdio.h>
#include <limits.h>

int findLRU(int time[], int n) {
    int min = time[0], pos = 0;
    for (int i = 1; i < n; i++) {
        if (time[i] < min) {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

void LRU(int pages[], int n, int frames[], int f) {
    int time[f], count = 0, faults = 0;
    for (int i = 0; i < f; i++) frames[i] = -1;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < f; j++) {
            if (frames[j] == pages[i]) {
                found = 1;
                time[j] = ++count;
                break;
            }
        }
        if (!found) {
            int pos = findLRU(time, f);
            frames[pos] = pages[i];
            time[pos] = ++count;
            faults++;
        }
    }
    printf("LRU Page Faults: %d\n", faults);
}

int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frames[3];
    LRU(pages, n, frames, 3);
    return 0;
}