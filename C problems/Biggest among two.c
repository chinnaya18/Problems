/*Write a program to find the biggest among two numbers without using any control
structures. */

#include<stdio.h>
void main(){
int a,b;
char temp;
printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%d", &b);
temp = a > b ? 'a' : 'b';
printf("The biggest value is : %c", temp);
}