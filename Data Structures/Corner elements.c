/* Given a 2-D matrix. Write a program to print its corner elements and the sum of the
corner elements.
Input:
6 4 6 9
2 6 1 8
5 5 2 2
4 4 1 3
Output: Corner elements: 6 4 9 3, Corner_Sum = 22 */

#include<stdio.h>

void main(){
    int i,j,a[20][20],m,n,x;

    printf("Row:\n");
    scanf("%d",&m);
    printf("column:\n");
    scanf("%d",&n);
    printf("Enter the value for array:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Corner Points: %d %d %d %d\n", a[0][0], a[m-1][0], a[0][n-1], a[m-1][n-1]);
    x = a[0][0]+a[m-1][0]+a[0][n-1]+a[m-1][n-1];
    printf("The sum of the corner points: %d", x);

}
