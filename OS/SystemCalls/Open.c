#include <fcntl.h> 
#include <unistd.h> 
int main() { 
    int fd = open("file.txt", O_RDONLY); 
    if (fd == -1) { 
        printf("No Such File Exist"); 
        } 
    close(fd); 
    return 0; 
}