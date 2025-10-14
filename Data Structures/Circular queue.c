/* Insertion and Deletion in circular queue */

#include <stdio.h>
#include <ctype.h>

#define MAX 4

int cqueue[MAX];
int front = -1;
int rear = -1;


void insertion(int item) {
    if (((rear + 1) % MAX) == front) {
        printf("Queue overflow! Cannot insert %d\n", item);
        return;
    }

    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    cqueue[rear] = item;
    printf("The inserted element is %d\n", item);
}

int deletion() {
    int pop;

    if (front == -1) {
        printf("Queue underflow! Queue is empty.\n");
        return -1;
    }

    pop = cqueue[front];

    if (front == rear) {

        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }

    printf("The deleted element is %d\n", pop);
    return pop;
}

void display(){
    int i;

    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    if(rear >= front){
            for(i=front;i<=rear;i++){
                printf(" %d",cqueue[i]);
            }
    }
    else{
        for(i=front;i<MAX;i++){
                printf(" %d",cqueue[i]);
        }
        for(i=0;i<=rear;i++){
            printf(" %d",cqueue[i]);
        }
    }
    printf("\n");
}

int main() {
    int item;
    char choice, conts;

    do {
        printf("Do you want to enqueue or dequeue [I/D/S]: ");
        scanf(" %c", &choice);
        choice = tolower(choice);

        if (choice == 'i') {
            printf("Enter the value to enqueue: ");
            scanf("%d", &item);
            insertion(item);
        } else if (choice == 'd') {
            deletion();
        } else if(choice == 's'){
            display();
        } else {
            printf("Invalid input!\n");
        }

        printf("Do you want to perform another operation [Y/N]?: ");
        scanf(" %c", &conts);
    } while (tolower(conts) == 'y');

    printf("End of program.\n");

    return 0;
}
