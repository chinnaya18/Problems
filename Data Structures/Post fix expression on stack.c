/* Write  Program which will Evaluate entered Postfix Expression by user using Stack
OUTPUT:
Enter the expression :: 245+*
The result of expression 245+*  =  18
 */


 #include <stdio.h>
#include <string.h>

#define MAX 50
int top = -1;
int stack[MAX];


void push(int item) {
    if (top == MAX - 1) {
        printf("\nThe Stack is overflowing!");
    } else {
        top++;
        stack[top] = item;
        printf("\nThe %c is pushed into the stack", stack[top]);
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

void main() {
    char expr[MAX];
    int i;
    int val1, val2,result;

    printf("Enter the Expression:");
    scanf("%s", &expr);

    while(expr[i] != '\0'){
        char ch = expr[i];

        if (isdigit(ch)){
            push(ch - '0');
        }

        else{
            val1= pop();
            val2 = pop();
            switch(ch){
             case '+': result = val1 + val2; break;
             case '-': result = val1 - val2;break;
             case '*': result = val1 * val2;break;
             case '/': if(val2 = 0){
                printf("Zero division error!");
                return -1;
             }
                result = val1 / val2;
                break;
            }
            push(result);

        }
    }

}

