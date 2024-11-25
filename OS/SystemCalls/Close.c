#include <fcntl.h>  
#include <stdio.h>  
#include <stdlib.h>  // Include this for exit function
#include <unistd.h>  

int main() {  
    int fd1 = open("foo.txt", O_RDONLY);  
    if (fd1 < 0) {  
        perror("open");  
        exit(1);  
    }  
    printf("opened the fd = %d\n", fd1);  

    // Using close system call  
    if (close(fd1) < 0) {  
        perror("close");  
        exit(1);  
    }  
    printf("closed the fd.\n");  

    return 0;  // Return 0 to indicate successful completion
}