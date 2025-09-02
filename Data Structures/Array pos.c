/* Write a program to search for a specified number in an array and display with its position. */
#include<stdio.h>

void main(){
    int n,t,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the value of t:");
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(a[i] == t){
            printf("The value is found at the index:%d",i);
            break;
        }
        else{
            printf("Not found");
        }
    }
}
