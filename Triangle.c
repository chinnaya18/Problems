/* Write a C program to print * in the format given below.
 1.Right Triangle
 2.Pyramid
 3.Diamond
 4.Right Arrow */


 //Right Triangle
 #include<stdio.h>
void main(){
int num,i,j;
char character;
printf("Enter the character:");
scanf("%c", & character);
printf("Enter the number:");
scanf("%d", & num);
for(i=0; i < num; i++){
for (j = 0; j <= i; j++){
printf("%c", character);
}
printf("\n");
}
}


//Pyramid
#include <stdio.h>
int main() {
int n = 5;

for (int i = 0; i < n; i++) {
for (int j = 0; j < 2 * (n - i - 1); j++)
printf(" ");
for (int k = 0; k < 2 * i + 1; k++)
printf("* ");
printf("\n");
}
return 0;
}


//Diamond
#include <stdio.h>
int main() {
int n = 5;
for (int i = 0; i < 2 * n - 1; i++) {
int comp;
if (i < n) comp = 2 * (n - i) - 1;

else comp = 2 * (i - n + 1) + 1;

for (int j = 0; j < comp; j++)
printf(" ");
for (int k = 0; k < 2 * n - comp; k++) {
printf("* ");
}
printf("\n");
}
return 0;
}


//Right Triangle
#include <stdio.h>
int main() {
int rows, i, j;
printf("Enter the number of rows for the arrow (odd number recommended): ");
scanf("%d", &rows);
for (i = 1; i <= rows / 2 + 1; i++) {
// Print leading spaces
for (j = 1; j < i; j++) {
printf(" ");
}
for (j = i; j <= rows / 2 + 1; j++) {
printf("*");
}
printf("\n");
}
for (i = rows / 2; i >= 1; i--) {
// Print leading spaces
for (j = 1; j < i; j++) {
printf(" ");
}
// Print stars
for (j = i; j <= rows / 2 + 1; j++) {
printf("*");
}
printf("\n");
}
return 0;
}

