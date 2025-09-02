/* Sparse matrix is a special matrix with most of its elements are zero. Assume that if
(m * n) / 2 elements are zero then it is a sparse matrix. Write a C program to read
elements in a matrix and check whether matrix is Sparse matrix or not.
Example
Input
Input elements in matrix:
1 0 3
0 0 4
6 0 0 */

#include<stdio.h>

void main(){
    int a[20][20], i, j,n,m,sparse=0,x;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Enter value for 2D array:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if( a[i][j] == 0){
                sparse += 1;
            }
        }
    }

    x = (m*n)/2;
    if(sparse >= x){
        printf("This is a sparse matrix!!!");
    }
    else if(sparse < x){
        printf("This is not a sparse matrix!!!");
    }


}
