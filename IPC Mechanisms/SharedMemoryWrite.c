#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/shm.h>
#include <unistd.h>

int main() {
  int i;
  void *shared_memory;
  char buffer[100];
  int shmid;
  shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT);
  printf("Key of shared memory is %d\n", shmid);
  shared_memory = shmat(shmid, NULL, 0);

  printf("Process attached at %p\n", (int)shared_memory);
  printf("Enter some data to write to the shared memory: ");
  read(0, buffer, 1024);

  strcpy(shared_memory, buffer);

  printf("You wrote: %s\n", shared_memory);
}