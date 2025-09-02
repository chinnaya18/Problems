/* Write a program to sort the list of numbers in an ascending and descending order. */

#include<stdio.h>

void main(){
    int i,j,k,temp,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    //Ascending order

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order:");
    for(j=0;j<n;j++){
        printf("%d", a[j]);
        printf(" ");
    }
    //Descending order
    for(i=0;i<n;i++){
        for(k=0;k<i+1;k++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[k];
                a[k] = temp;
            }
        }
    }
    printf("The descending order");
    for (k=0;k<n;k++){
        printf("%d", a[k]);
        printf(" ");
    }
}
