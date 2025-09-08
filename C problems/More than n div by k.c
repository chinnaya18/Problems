/* Given an array of size n and a number k, find all elements that appear more than n/k
times. */

#include<stdio.h>

void main(){
    int n,i,k;

    printf("Value for n:");
    scanf("%d",&n);

    int a[n];
    printf("Value for array:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Value for K:\n");
    scanf("%d", &k);
    printf("The values after %d by %d :\n");
    for(i = n/k;i<n;i++){
       printf("%d",a[i]);
    }
}
