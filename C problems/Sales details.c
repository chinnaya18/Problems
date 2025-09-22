/* SALES DETAILS
Write a C program that prompts for and reads in the sales for each of 5 salespeople in a 
company. It then prints out the id and amount of sales for each salesperson and the 
total sales. 
Perform following operations also.
a) Compute and print the average sale. (You can compute this directly from the total; 
no loop is necessary.) 
b) Find and print the maximum sale. Print both the id of the salesperson with the max 
sale and the amount of the sale, e.g., "Salesperson 3 had the highest sale with 45000." 
Note that you don't need another loop for this; you can do it in the same loop where 
the values are read and the sum is computed. 
c) Do the same for the minimum sale. 
d) After the list, sum, average, max and min have been printed, ask the user to enter a 
value. Then print the id of each salesperson who exceeded that amount, and the 
amount of their sales. Also print the total number of salespeople whose sales exceeded 
the value entered.
e) The salespeople are objecting to having an id of 0—no one wants that designation. 
Modify your program so that the ids run from 1–5 instead of 0–4. Do not modify the 
array—just make the information for salesperson 1 reside in array location 0, and so 
on. 
f) Instead of always reading in 5 sales amounts, at the beginning ask the user for the 
number of sales people and then create an array that is just the right size. The program 
can then proceed as before. */

#include<stdio.h>

void main(){
    int n, i, temp, j, c = 0, c1 = 0, limit;
    float sum = 0, avg;

    printf("Enter the Number of Sales person: ");
    scanf("%d", &n);

    int id[n];
    int sal[n];

    printf("\nEnter the sales person Id with sales (e.g., 101:5000):\n");
    for(i = 0; i < n; i++) {
        scanf("%d:%d", &id[i], &sal[i]);
    }

    for(i = 0; i < n; i++) {
        sum += sal[i];
        for(j = 0; j < i; j++) {
            if(sal[i] > sal[j]) {
                temp = sal[i];
                sal[i] = sal[j];
                sal[j] = temp;

                temp = id[i];
                id[i] = id[j];
                id[j] = temp;
            }
        }
    }

    printf("\nThe maximum sales is %d made by Salesperson %d", sal[0], id[0]);
    printf("\nThe minimum sales is %d made by Salesperson %d", sal[n-1], id[n-1]);

    avg = sum / n;
    printf("\nThe total sum of sales: %.2f", sum);
    printf("\nThe average sales is: %.1f", avg);

    printf("\n\nEnter any limit to search: ");
    scanf("%d", &limit);

    for(i = 0; i < n; i++) {
        if(sal[i] > limit) {
            printf("\nSalesperson %d had sales of %d", id[i], sal[i]);
            c1++;
        }
    }

    printf("\nTotal sales persons who crossed the limit: %d", c1);
}
