#include <stdio.h>

int main() {
    int n, nm, p, x = 0, y = 1, t = 300, of, i;

    printf("Enter the memory size:\n");
    scanf("%d", &nm);
    printf("Enter the number of segments:\n");
    scanf("%d", &n);
    
    int s[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter the segment size of %d: ", i + 1);
        scanf("%d", &s[i]);
        x += s[i];
        if (x > nm) {
            printf("Memory full, segment %d is not allocated\n", i + 1);
            x -= s[i];
            s[i] = 0;
        }
    }

    printf("----- OPERATIONS -----\n");
    
    while (y == 1) {
        printf("Enter the number of operations:\n");
        scanf("%d", &p);
        printf("Enter the offset: ");
        scanf("%d", &of);
        
        if (s[p - 1] == 0) {
            printf("Segment is not allocated\n");
        } else if (of > s[p - 1]) {
            printf("Out of range!\n");
        } else {
            printf("Segment %d: Physical address ranges from %d to %d\nAddress of operation: %d\n", 
                   p, t, t + s[p - 1], t + of);
        }
        
        printf("Press 1 to continue: ");
        scanf("%d", &y);
    }

    return 0;
}