/*Write the complete C program that asks the user to enter the value for t from the
 keyboard and then it computes and prints the value of p which is expressed as a
 function of t by */

#include<stdio.h>

void main()
{
int t, p;
printf("Enter the value of t:");
scanf("%d", &t);
if(0 < t && t <= 2){
p = 20;
printf("%d", p);
}
else if (((13 < t) && (t <= 16)) || (t > 30)){
p = 4 * t + 2;
printf("%d", p);
}
else{
p = 4 * (t*t + 2*t);
printf("%d", p);
}
}