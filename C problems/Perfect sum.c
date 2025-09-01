/* A number is said to be perfect if it is equal to the sum of all numbers which are its
factors (excluding itself). So, for example, 6 is perfect, because it is the sum of its
factors 1,2,3. Write a program which determines if a number is perfect. It should also
print its factors. */

#include <stdio.h>
int main() {
int num, i, sum = 0;

printf("Enter a number: ");
scanf("%d", &num);
printf("Factors of %d (excluding itself): ", num);

for (i = 1; i < num; i++) {
if (num % i == 0) {
printf("%d ", i);
sum += i;
}
}
printf("\nSum of factors = %d\n", sum);

if (sum == num)
printf("%d is a Perfect Number.\n", num);
else
printf("%d is NOT a Perfect Number.\n", num);
return 0;
}