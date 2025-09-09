/* Given an unsorted array arr[] of size N having both negative and positive integers.
The task is place all negative element at the end of array without changing the order
of positive element and negative element.
Expected Time Complexity: O(N) */

#include <stdio.h>

int moveNeg(int a[],int n){
    int i,low,high;
    int b[n];
    low = 0;
    high = n-1;
    for(i=0;i<n;i++){
        if(a[i] > 0){
            b[low++]=a[i];
        }
        else if(a[i]<0){
            b[high--] = a[i];
        }
    }
    for(i=0;i<n;i++){
        a[i] = b[i];
    }


    return moveNeg;
}

void main(){
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int a[n];

    printf("Value for array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    moveNeg(a,n);
    printf("Modified array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
