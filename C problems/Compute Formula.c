/*Write a C program to compute the following

f = x^3 - 2x^2 + x - 6.3 / x^2 + 0.05x + 3.14 */

#include<stdio.h>
#include<math.h>
float main()
{
float f, x;
printf("Enter value of x:");
scanf("%f",&x);
f = (pow(x,3) - 2*pow(x,2) + x - 6.3)/ (pow(x,2) + 0.05*x + 3.14 );
printf("The vlaue of f:%f",f);
return 0.0;

}
