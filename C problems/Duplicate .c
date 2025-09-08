/* Write a C program to check if array contains a duplicate number.
 */

 #include<stdio.h>

void main(){
    int n,i,j,dup = 0;

    printf("Enter the value for n:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the value for loop:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
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
