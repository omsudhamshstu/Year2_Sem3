// classical problem synchronisation

#include <stdio.h>
void main() {
  int buffer[10], bufferSize, in, out, produce, consume, choice = 0;
  in = 0;
  out = 0;
  bufferSize = 10;

  while (choice != 3) {
    printf("\n1. Producer\n2. Consumer\n3. Exit\n");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      if ((in + 1) % bufferSize == out)
        printf("\nBuffer is FULL");
      else {
        printf("\n Enter the value: ");
        scanf("%d", &produce);
        buffer[in] = produce;
        in = (in + 1) % bufferSize;
      }
      break;

    case 2:
      if (in == out)
        printf("\nBuffer is EMPTY");
      else {
        consume = buffer[out];
        printf("\n The consumed value is: %d", consume);
        out = (out + 1) % bufferSize;
      }
      break;
    }
  }
}