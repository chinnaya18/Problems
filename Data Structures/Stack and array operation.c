/* Given a stack of N numbers and an array of numbers. Count the numbers of pop operations required to get each element of the array. Once an element is popped then it’s not pushed back again. Assume that the all the elements from the array present inside the stack initially.
Input: N = 5
Stack: 6 4 3 2 1
Array: 6 3 4 1 2
Output: 1 2 0 2 0
 */

 #include<stdio.h>
#define MAX 100

int main(){
    int n,i,j,count,found,target;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int stack[n];
    int arr[n];
    int popped[MAX]={0};

    printf("\nEnter the values for stack:");
    for(i=0;i<n;i++){
        scanf("%d",&stack[i]);
    }

    printf("\n Enter the values for array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        target = arr[i];
        count = 0;
        found = 0;


        if(popped[target]){
            printf("0 ");
            continue;
        }

        for(j=0;j<n;j++){
            if(!popped[stack[j]]){
                count++;

                popped[stack[j]] = 1;

                if(target == stack[j]){
                    found = 1;
                    break;
                }
            }
        }

        if(found){
            printf("%d ",count);
        }
        else{
            printf("0 ");
        }

    }
}
