/* Queue insertion and deletion in c programming */

#include <stdio.h>
#include <ctype.h>
#define MAX 50

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX - 1) {
        printf("The queue is full!\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = item;
        printf("Inserted value: %d\n", item);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("The queue is empty!\n");
    } else {
        int pop = queue[front];
        printf("Deleted value: %d\n", pop);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

int main() {
    int item;
    char choice, conts;

    do {
        printf("Do you want to enqueue or dequeue [E/D]: ");
        scanf(" %c", &choice);
        choice = tolower(choice);

        if (choice == 'e') {
            printf("Enter the value to enqueue: ");
            scanf("%d", &item);
            enqueue(item);
        } else if (choice == 'd') {
            dequeue();
        } else {
            printf("Invalid Input!\n");
        }

        printf("Do you want to perform another operation [Y/N]?: ");
        scanf(" %c", &conts);
    } while (tolower(conts) == 'y');

    printf("End of program.\n");
    return 0;
}
