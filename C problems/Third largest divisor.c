/* Write a C program that accepts three positive integer n, m, k and prints the third largest 
integer p, p <= k, such that p divides both n and m. It prints 0 if there is no such third 
largest p > 0. For example, n = 200, m = 100, k = 80, result is 20. Again, if n = 35, m = 
25, k = 18, then the result is 0. Do not use arrays or any library functions other than 
standard input and output. */

#include<stdio.h>

void main() {
    int n,m,k,i,ans,c=0;

    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\nEnter the value of m:");
    scanf("%d",&m);
    printf("\nEnter the value of k:");
    scanf("%d",&k);


    for(i=k;i>0;i--){
        if((n%i == 0) && (m%i == 0)){
            c += 1;
            if(c == 3){
                printf("The third highest divisor is: %d", i);
                break;
            }
        }
    }
}
