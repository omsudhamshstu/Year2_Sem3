#include <stdio.h>

int main() {
    int ms, ps, nop, np, rempages, i, j, x, y, offset, pa;
    int s[10], fno[10][20];

    printf("Enter memory size: ");
    scanf("%d", &ms);
    printf("Enter page size: ");
    scanf("%d", &ps);
    
    nop = ms / ps;
    printf("Number of pages available: %d\n", nop);
    
    printf("Enter number of processes: ");
    scanf("%d", &np);
    rempages = nop;

    for (i = 1; i <= np; i++) {
        printf("Enter number of pages required for p[%d]: ", i);
        scanf("%d", &s[i]);
        
        if (s[i] > rempages) {
            printf("Memory is Full\n");
            break;
        }
        
        rempages -= s[i];
        printf("Enter page table for p[%d]: ", i);
        for (j = 0; j < s[i]; j++)
            scanf("%d", &fno[i][j]);
    }

    printf("Enter process number, page number, and offset: ");
    scanf("%d %d %d", &x, &y, &offset);
    
    if (x > np || y >= s[x] || offset >= ps)
        printf("Invalid Process or Page Number or Offset\n");
    else {
        pa = fno[x][y] * ps + offset;
        printf("The Physical Address is: %d\n", pa);
    }

    return 0;
}