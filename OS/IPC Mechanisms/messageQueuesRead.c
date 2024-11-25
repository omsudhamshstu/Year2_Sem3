#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msg_buffer {
    long msg_type;
    char msg_text[100];
} message;

int main() {
    key_t key = ftok("progfile", 65);
    int msgid = msgget(key, 0666 | IPC_CREAT);

    msgrcv(msgid, &message, sizeof(message.msg_text), 1, 0);
    printf("Message received: %s", message.msg_text);

    msgctl(msgid, IPC_RMID, NULL); // Remove message queue
    return 0;
}

//! These codes can be executed in a Linux environment.