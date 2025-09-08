/* Write a program that accepts an array and a key value. Rotate the array element by
‘key’ times.
Example:

Input: array[]= [1, 2, 3, 4, 5, 6]
key=2
Output : [ 3, 4, 5, 6, 1, 2] */

#include<stdio.h>

void main(){
    int n,i,key,temp[n];

    printf("Value for n:\n");
    scanf("%d",&n);

    int a[n];

    printf("Value for array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Value for key:\n");
    scanf("%d",&key);

    key = key % n;

    for(i=0;i<n;i++){
        temp[i] = a[(i + key) % n];
        a[i] = temp[i];
    }

    printf("The rotated array is:\n");

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
