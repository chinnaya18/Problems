/* Given an array of size N containing only 0s, 1s, and 2s; write a program to sort the
array in ascending order. Expected Time Complexity: O(N) */

#include<stdio.h>

int sorArr(int a[],int n){
    int i,temp,low,mid,high;
    low = 0;
    mid = 0;
    high = n-1;
    for(i=0;i<n;i++){
        if(a[mid] == 0){
            temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else if (a[mid]==2){
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
        else{
            break;
        }
    }
    return sorArr;
}

void main(){
 int n,i;
 printf("Value for n:");
 scanf("%d",&n);

 int a[n];
 printf("Enter value in 0s, 1s and 2s :");
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }

 sorArr(a,n);

 for(i=0;i<n;i++){
    printf("%d", a[i]);
 }
}
