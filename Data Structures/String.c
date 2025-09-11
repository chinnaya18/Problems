/* Write a program to accept your name and count the number of vowels in it.
Sample Input: Alice
Sample Output: 3
 */

#include<stdio.h>
#include<string.h>

void main(){
    char c[100];
    int i,count=0,len;
    printf("Enter the string:");
    scanf("%s", c);

    len=strlen(c);

    for(i=0;i<len;i++){
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' ||c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U' ){
            count++;
        }
    }
    printf("The Number of vowel in the string is: %d", count);
}  