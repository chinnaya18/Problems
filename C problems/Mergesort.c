/* Write a C program to merge sorted array? */

#include<stdio.h>

void main(){
    int n1,n2,i,j,k;

    printf("Value for n1:");
    scanf("%d",&n1);
    int a[n1];
    printf("Value for array a:");

    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("Value for n2:");
    scanf("%d",&n2);

    int b[n2];
    printf("Value for array b:");
    for(i=0;i<n2;i++){
        scanf("%d", &b[i]);
    }

    int ma[n1+n2];

    i = 0;
    j=0;
    k = 0;
    while((i < n1) && (j < n2)){
        if(a[i] > b[j]){
            ma[k++] = a[i++];
        }
        else{
            ma[k++] = b[j++];
        }
    }
    while(i < n1){
        ma[k++] = a[i++];
    }
    while(j < n2){
        ma[k++] = b[j++];
    }

    printf("The Merged array is:\n");
    for(k=0;k<n1+n2;k++){
        printf("%d ", ma[k]);
    }
}
