/* Write a program to accept the integer values and display the second largest value in an array. */

#include<stdio.h>

void main()
{
    int i,j,temp,n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i < n; i++){
        for (j=0; j<i+1; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(j=0;j<n;j++){
        printf("%d", arr[j]);
        printf(" ");

    }
    printf("The Second most highest value is:%d\n", arr[1]);
    return 0;
}



