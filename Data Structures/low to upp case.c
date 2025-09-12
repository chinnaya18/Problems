/*Write a program that converts all lowercase characters in a given string to its
equivalent uppercase character.
Sample Input: abcabcd
Sample Output: ABCABCD*/


#include<stdio.h>
#include<string.h>

void main(){

    char arr[100],x;
    int i,n;

    printf("Enter the string:");
    fgets(arr,100,stdin);

    n = strlen(arr);

    for(i=0;i<n-1;i++){
        if(arr[i]>='a'&&arr[i]<='z'){
            arr[i]=arr[i]-32;

        }
}
 for(i=0;i<n-1;i++){
        printf("%c",arr[i]);
    }
}
