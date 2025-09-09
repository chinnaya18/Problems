/* Given an array arr[] and an integer K where K is smaller than size of array, the task is
to find the K th smallest element in the given array. It is given that all array elements
are distinct.
Expected Time Complexity: O(n) */

#include<stdio.h>

int cmpArr(int* a, int* b){
    return(*(int *)a - *(int *)b);
}

int kthSmallest (int a[],int N,int K){
    qsort(a,N,sizeof(int),cmpArr);

    return a[K-1];
}

void main(){

    int n,N,K,i;
    printf("Value for n:");
    scanf("%d",&n);

    int a[n];

    printf("Enter value for array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    N = sizeof(a)/sizeof(a[0]);

    printf("Value for k:");
    scanf("%d",&K);


    printf("%d",kthSmallest(a,N,K));
    return 0;


}
