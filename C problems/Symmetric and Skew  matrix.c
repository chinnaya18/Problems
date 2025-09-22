/* A square matrix A = (aij) is called symmetric if aij = aji for all indices i,j. A is called 
skew-symmetric if aij = -aji for all indices i,j with i != j. Write a function that, given a 
square matrix A, computes a symmetric matrix B and a skew-symmetric matrix C 
satisfying A = B + C.
 */

#include<stdio.h>
#include<math.h>

void main(){
    int m,n,i,j;
     printf("\nEnter the value of row:");
     scanf("%d",&m);
     printf("\nEnter the value of column:");
     scanf("%d",&n);

     int A[m][n];
     float b[m][n], c[m][n];


     if(m == n){
     printf("\nEnter the value of square matrix:\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
     }

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j] = 0.5*(A[i][j] + A[j][i]);
            c[i][j] = 0.5*(A[i][j] - A[j][i]);
        }
     }

     printf("\nThe symmetric matrix:\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
               printf("  %.1f",b[i][j]);
        }
        printf("\n");
        }

    printf("\nThe skew matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
               printf("  %.1f",c[i][j]);
        }
        printf("\n");
        }

     }
     else{
        printf("This is not an square matrix");
     }
}

