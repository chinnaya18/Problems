/* Check if a given array contains duplicate elements within k distance from each other
Given an unsorted array that may contain duplicates. Also given a number k which is smaller
than size of array. Write a C function that returns true if array contains duplicates within k
distance. */

#include<stdio.h>

void main(){
    int n,i,j,dup = 0,k;

    printf("Enter the value for n:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the value for loop:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Value for the k:");
    scanf("%d",&k);

     for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(a[i] == a[j]){
                dup += 1;
                printf("Duplicate found %d\n",a[i]);
            }
        }
     }
     if(dup==0){
        printf("no duplicate");
     }
     else{
        printf("duplicate number in the array");
     }
}
