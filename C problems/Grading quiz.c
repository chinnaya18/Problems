/* Grading Quizzes 
Write a program that grades arithmetic quizzes as follows: 
a. Ask the user how many questions are in the quiz. 
b. Ask the user to enter the key (that is, the correct answers). There should be one 
answer for each question in the quiz, and each answer should be an integer. They can 
be entered on a single line, e.g., 34 7 13 100 81 3 9 10 321 12 might be the key for a 
10-question quiz. You will need to store the key in an array. 
c. Ask the user to enter the answers for the quiz to be graded. As for the key, these can 
be entered on a single line. Again there needs to be one for each question. Note that 
these answers do not need to be stored; each answer can simply be compared to the key 
as it is entered.
d. When the user has entered all of the answers to be graded, print the number correct 
and the percent correct. 
When this works, add a loop so that the user can grade any number of quizzes with a 
single key. After the results have been printed for each quiz, ask "Grade another quiz? 
(y/n)." */

#include<stdio.h>

void main(){
    int n,i,c;
    float per;
    char choice;

    printf("Enter the value for n:\n");
    scanf("%d",&n);

    int key[n];

    printf("Enter the correct answer for the quiz:\n");
    for(i=0;i<n;i++){
        scanf("%d", &key[i]);
    }

    do{
    c = 0;
    int ans[n];
    printf("\nEnter the user answer:\n");
    for(i=0;i<n;i++){
        scanf("%d", &ans[i]);
    }

    printf("The correct answers are:\n");
    for(i=0;i<n;i++){
        if(key[i] == ans[i]){
            printf(" %d", ans[i]);
            c += 1;
        }
    }

     per = (c / (float)n) * 100;

    printf("\nThe percentage is:%.1f", per);

    printf("Do you want to check for another:(y,n)");
    scanf(" %c", &choice);
    }
    while(choice == 'y' || choice == 'Y');

    printf("Thank You!!!");
}


