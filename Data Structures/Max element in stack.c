/* Given a stack of integers. The task is to design a special stack such that maximum element can be found in O(1) time and O(1) extra space.
Examples:
Given Stack : 2       5       1         64   --> Maximum
So Output must be 64 when getMax() is called.
 */

 #include<stdio.h>
#define MAX 50

int stack[MAX];
int max_stack[MAX];
int top = -1;
int max_top = -1;


void push(int item) {
    if (top == MAX - 1) {
        printf("\nThe Stack is overflowing!");
    } else {
        top++;
        stack[top] = item;
        printf("\nThe %c is pushed into the stack", stack[top]);
        if(stack[top] > max_stack[max_top]){
                max_top += 1;
                max_stack[max_top] = stack[top];
        }
    }
}


int pop() {
    int poppedItem = -1;
    if (top == -1) {
        printf("\nThe Stack is underflow!");
    } else {
        poppedItem = stack[top];
        printf("\nThe popped item is )");
        top--;
    }
    return poppedItem;
}


int getmax(){
    if(max_stack[max_top] == -1){
        printf("The stack is underflow!!");
    }
    else{
        printf("The Maximum element in the stack is: %d", max_stack[max_top]);
    }
}


void main(){
     int item;
    char choice, cont;

    do {
        printf("\nEnter your choice for push or pop [p/o/g/t]: ");
        scanf(" %c", &choice);

        if (tolower(choice) == 'p') {
            printf("Enter the element to push: ");
            scanf("%d", &item);
            push(item);
        } else if (tolower(choice) == 'o') {
            pop();
        } else if(tolower(choice) == 'g'){
            getmax();
        }  else {
            printf("Invalid choice!\n");
        }

        printf("\nDo you want to perform another operation? [y/n]: ");
        scanf(" %c", &cont);

    } while (tolower(cont) == 'y');

    printf("\nEnd of operations!\n");
    return 0;
}





