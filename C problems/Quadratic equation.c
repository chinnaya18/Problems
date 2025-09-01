//Write a C program to print the roots of a quadratic equation.

#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,discriminant, root1, root2,real,imaginary;
printf("Enter the values of a,b,c:");
scanf("%f %f %f",&a,&b,&c);
discriminant = pow(b,2) - 4*a*c;
printf("The value of discriminant:%f\n", discriminant);
if(discriminant > 0){
root1 = -b + sqrt(discriminant) / 2*a;
root2 = -b - sqrt(discriminant) / 2*a;
printf("The value of the root1 is :%.2f\n", root1);
printf("The value of the root2 is :%.2f\n", root2);
}
else if (discriminant==0){
real = -b/2*a;
printf("The discriminant is equal and real:%.2f \n", real);
}
else{
real = -b/2*a;
imaginary = sqrt(discriminant)/2*a;
printf("The real value is : %.2f\n",real);
printf("The imaginary value is: %.2f \n", imaginary);
}
}