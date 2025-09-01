/* Write a program that takes as input a natural number x and prints the smallest
palindrome larger than x. A palindrome is a word, number, phrase, or other sequence
of characters which reads the same backward as forward, such as madam, racecar.
There are also numeric palindromes, including date/time stamps using short digits
11/11/11 11:11 and long digits 02/02/2020.
Input: n = 121
Output: Next smallest palindrome of 121 is 131 */

#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num) {
int reversed = 0, original = num, digit;
while (num > 0) {
digit = num % 10;
reversed = reversed * 10 + digit;
num /= 10;
}
return (original == reversed);
}
int main() {
int n, next;
printf("Enter a number: ");
scanf("%d", &n);
next = n + 1;
while (1) {
if (isPalindrome(next)) {

printf("Next smallest palindrome of %d is %d\n", n, next);
break;
}
next++;
}
return 0;
}