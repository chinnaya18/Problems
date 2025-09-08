/* Write a C program to reverse array in place in C. */

#include<stdio.h>

void main(){
    int n,i,start,end,temp;

    printf("Value for n:");
    scanf("%d",&n);

    int a[n];
    printf("Value for array:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    start = 0;
    end = n-1;
    while(start < end){
        temp = a[start] ;
        a[start]= a[end];
        a[end] = temp;
        start++;
        end--;
    }

    for(end = 0; end <n; end++){
        printf("%d ", a[end]);
    }

}
