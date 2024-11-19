// // classical problem synchronisation

// #include <stdio.h>
// void main() {
//   int buffer[10], bufferSize, in, out, produce, consume, choice = 0;
//   in = 0;
//   out = 0;
//   bufferSize = 10;

//   while (choice != 3) {
//     printf("\n1. Producer\n2. Consumer\n3. Exit\n");
//     printf("\n Enter your choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//     case 1:
//       if ((in + 1) % bufferSize == out)
//         printf("\nBuffer is FULL");
//       else {
//         printf("\n Enter the value: ");
//         scanf("%d", &produce);
//         buffer[in] = produce;
//         in = (in + 1) % bufferSize;
//       }
//       break;

//     case 2:
//       if (in == out)
//         printf("\nBuffer is EMPTY");
//       else {
//         consume = buffer[out];
//         printf("\n The consumed value is: %d", consume);
//         out = (out + 1) % bufferSize;
//       }
//       break;
//     }
//   }
// }

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE], in = 0, out = 0;
sem_t emptySlots, filledSlots;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void produce() {
    int produce;
    sem_wait(&emptySlots);
    pthread_mutex_lock(&mutex);

    printf("Enter value to produce: ");
    scanf("%d", &produce);
    buffer[in] = produce;
    in = (in + 1) % BUFFER_SIZE;

    sem_post(&filledSlots);
    pthread_mutex_unlock(&mutex);
}

void consume() {
    int consume;
    sem_wait(&filledSlots);
    pthread_mutex_lock(&mutex);

    consume = buffer[out];
    out = (out + 1) % BUFFER_SIZE;

    sem_post(&emptySlots);
    pthread_mutex_unlock(&mutex);

    printf("Consumed value: %d\n", consume);
}

int main() {
    sem_init(&emptySlots, 0, BUFFER_SIZE);
    sem_init(&filledSlots, 0, 0);

    int choice;
    while (1) {
        printf("\n1. Producer\n2. Consumer\n3. Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                produce();
                break;
            case 2:
                consume();
                break;
            case 3:
                return 0;
        }
    }
}