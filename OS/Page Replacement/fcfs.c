// #include <stdio.h>

// void fcfs(int pages[], int n, int frame_size) {
//     int frames[frame_size];
//     int page_faults = 0;
//     int i, j;

//     for (i = 0; i < frame_size; i++) {
//         frames[i] = -1;
//     }

//     printf("FCFS Page Replacement Policy:\n");
//     for (i = 0; i < n; i++) {
//         int found = 0;
//         // Check if page is already in frame
//         for (j = 0; j < frame_size; j++) {
//             if (frames[j] == pages[i]) {
//                 found = 1;
//                 break;
//             }
//         }
//         // If page not found, replace oldest page
//         if (!found) {
//             page_faults++;
//             if (i >= frame_size) {
//                 // Replace oldest page
//                 frames[i % frame_size] = pages[i];
//             } else {
//                 // Fill empty frames
//                 frames[i] = pages[i];
//             }
//             printf("Page %d not found. Replaced page %d.\n", pages[i], (i > frame_size) ? frames[(i - 1) % frame_size] : -1);
//         }
//     }
//     printf("Total Page Faults: %d\n", page_faults);
// }

// int main() {
//     int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
//     int n = sizeof(pages) / sizeof(pages[0]);
//     int frame_size = 3;

//     fcfs(pages, n, frame_size);

//     return 0;
// }

#include <stdio.h>

#define MAX_FRAMES 3  // Number of frames in the memory
#define MAX_PAGES 10  // Number of pages in the reference string

void fcfsPageReplacement(int pages[], int n) {
    int frames[MAX_FRAMES], pageFaults = 0;
    int i, j, flag;

    // Initialize frames with -1 to represent empty slots
    for (i = 0; i < MAX_FRAMES; i++) {
        frames[i] = -1;
    }
    for (i = 0; i < n; i++) {
        flag = 0;
        // Check if page is already in one of the frames
        for (j = 0; j < MAX_FRAMES; j++) {
            if (frames[j] == pages[i]) {
                flag = 1;
                break;
            }
        }
        // If the page is not in memory, we need a page fault
        if (flag == 0) {
            frames[pageFaults % MAX_FRAMES] = pages[i];
            pageFaults++;
            printf("Page %d loaded into frame %d\n", pages[i], pageFaults % MAX_FRAMES);
        }
    }

    printf("\nTotal page faults: %d\n", pageFaults);
}

int main() {
    int pages[MAX_PAGES] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3};
    int n = sizeof(pages) / sizeof(pages[0]);

    fcfsPageReplacement(pages, n);
    
    return 0;
}