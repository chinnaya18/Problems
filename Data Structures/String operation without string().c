/*  Write a program to accept a string and perform the following operations
without using any string functions:
a. Print the length of the string
b. Print the reverse of the string
c. Copy the string to another new string
Sample Input
Apple
Sample Output
5
elppA
Apple */
#include <stdio.h>

int main() {
    char str[100], rev[100], copy[100];

    printf("Enter the string: ");
    scanf("%s", str);   

    // a. Find length of string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("%d\n", length);

    // b. Reverse the string
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    for(int i=0;i<length;i++){
        printf("%c", rev[i]);
    }

    // c. Copy the string into another
    for (int i = 0; i <= length; i++) {  
        copy[i] = str[i];
    }
    printf("\n%s", copy);

    return 0;
}