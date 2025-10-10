/* Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.
Example 1:
Input
["push","push","push","getMin","pop","top","getMin"]
[[-2],[0],[-3],[],[],[],[]]
Output
[null,null,null,-3,null,0,-2]
Explanation
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 */

#include <stdio.h>
#include <limits.h>

#define MAX 100

int stack[MAX];
int minStack[MAX];
int top = -1;
int minTop = -1;

// Push function
void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
    if (minTop == -1 || val <= minStack[minTop]) {
        minStack[++minTop] = val;
    }
    printf("Pushed %d\n", val);
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    int poppedValue = stack[top--];
    if (poppedValue == minStack[minTop]) {
        minTop--;
    }
    printf("Popped %d\n", poppedValue);
}

// Top function
int topElement() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    printf("\n Top element : %d",stack[top]);
}

// Get Minimum function
int getMin() {
    if (minTop == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    printf("Minimum value : %d",minStack[minTop]);
}

// Display function
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
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
            getMin();
        } else if(tolower(choice) == 't'){
            topElement();
        } else {
            printf("Invalid choice!\n");
        }

        display();

        printf("\nDo you want to perform another operation? [y/n]: ");
        scanf(" %c", &cont);

    } while (tolower(cont) == 'y');

    printf("\nEnd of operations!\n");
    return 0;
}
