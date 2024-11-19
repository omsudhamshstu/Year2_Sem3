#include <stdio.h>
#include <unistd.h>  // Required for pipe() and fork()
#include <string.h>  // For memset (optional)

int main() {
    int pipefd[2];
    char buffer[20];

    if (pipe(pipefd) == -1) {
        perror("Pipe failed");
        return 1;
    }

    if (fork() == 0) { // Child Process
        close(pipefd[0]); // Close unused read end
        write(pipefd[1], "Hello, Pipe!", 13);
        close(pipefd[1]); // Close write end after use
    } else { // Parent Process
        close(pipefd[1]); // Close unused write end
        read(pipefd[0], buffer, sizeof(buffer));
        printf("Parent received: %s\n", buffer);
        close(pipefd[0]); // Close read end after use
    }
    return 0;
}

// Pipe Communication Example
// This C program demonstrates inter-process communication (IPC) using pipes.
// How it works:
// Create a pipe (pipe()).
// Fork a child process (fork()).
// Child Process:
// Close read end of pipe.
// Write message ("Hello, Pipe!") to pipe.
// Close write end.
// Parent Process:
// Close write end of pipe.
// Read message from pipe into buffer.
// Print received message.
// Close read end.
// Key Functions:
// pipe(): Creates a pipe.
// fork(): Creates a child process.
// write(): Writes to pipe.
// read(): Reads from pipe.
// close(): Closes pipe ends.
// Example Output:
// Parent received: Hello, Pipe!