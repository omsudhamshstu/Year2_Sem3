#include <stdio.h>

void fcfs(int pages[], int n, int frame_size) {
    int frames[frame_size];
    int page_faults = 0;
    int i, j;

    for (i = 0; i < frame_size; i++) {
        frames[i] = -1;
    }

    printf("FCFS Page Replacement Policy:\n");
    for (i = 0; i < n; i++) {
        int found = 0;
        // Check if page is already in frame
        for (j = 0; j < frame_size; j++) {
            if (frames[j] == pages[i]) {
                found = 1;
                break;
            }
        }
        // If page not found, replace oldest page
        if (!found) {
            page_faults++;
            if (i >= frame_size) {
                // Replace oldest page
                frames[i % frame_size] = pages[i];
            } else {
                // Fill empty frames
                frames[i] = pages[i];
            }
            printf("Page %d not found. Replaced page %d.\n", pages[i], (i > frame_size) ? frames[(i - 1) % frame_size] : -1);
        }
    }
    printf("Total Page Faults: %d\n", page_faults);
}

int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frame_size = 3;

    fcfs(pages, n, frame_size);

    return 0;
}