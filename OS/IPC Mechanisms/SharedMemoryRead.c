#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>

int main() {
    int shmid;
    void *shared_memory;

    shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT);
    if (shmid == -1) {
        perror("shmget failed");
        return 1;
    }
    printf("Key of shared memory is %d\n", shmid);
    shared_memory = shmat(shmid, NULL, 0);
    if (shared_memory == (void *) -1) {
        perror("shmat failed");
        return 1;
    }

    printf("Process attached at %p\n", shared_memory);
    printf("Data read from shared memory is: %s\n", (char *)shared_memory);

    return 0;
}