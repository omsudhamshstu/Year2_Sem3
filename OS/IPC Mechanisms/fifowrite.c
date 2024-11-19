#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO_NAME "myfifo"

int main() {
    mkfifo(FIFO_NAME, 0666);
    int fd = open(FIFO_NAME, O_WRONLY);
    write(fd, "Hello, FIFO!", 13);
    close(fd);
    return 0;
}