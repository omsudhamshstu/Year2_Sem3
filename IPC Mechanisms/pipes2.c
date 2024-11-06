// Pipes using fork() and pipe() system calls
#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 16
char *msg1 = "Hello world #1";
char *msg2 = "hello world #2";
char *msg3 = "hello world #3";
int main() {
  char intbuf[MSGSIZE];
  int p[2], pid, nbytes;

  if (pipe(p) < 0) {
    exit(1);
  }
  if ((pid = fork()) > 0) {
    write(p[1], msg1, MSGSIZE);
    write(p[1], msg2, MSGSIZE);
    write(p[1], msg3, MSGSIZE);
  } else {
    while ((nbytes = read(p[0], intbuf, MSGSIZE)) > 0)
      printf("%s\n", intbuf);
    if (nbytes != 0)
      exit(2);
    printf("Finished reading\n");
  }
  return 0;
}