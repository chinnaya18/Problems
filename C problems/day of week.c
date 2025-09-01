/* Write a program that outputs the day of the week given a date expressed as j (day) m
(month) a (year). You will use the following formula:

and with ns being the two first digits of a1 and as the two last digits of a1

f = j + a^3 + as/4 - 2ns + ns/4 + (26m1 - 2)/10;

The day of the week will then be given by the modulo of f and 7 (0 is Sunday, 1
Monday etc). Let the date be DD/MM/CCYY (european format), where DD is the
day of the month, MM is the month, CC the century-digits and YY the year within the
century. The for the date 23/06/1994. Starting with the century CC-digits, calculate
CC/4 - 2*CC-1 and remember the result. With all divisions in this exercise, discard
any remainder and just keep the whole part. So, in our example, this is 19/4=4 minus
2*19=38 minus 1, giving minus 35. 
Now, using the year YY, calculate 5*YY/4. In this example that&#39;s 5*94 = 470/4 =
117, discarding the remainder. Adding this to our existing result gives 117-35 = 82.
Using the month MM, calculate 26*(MM+1)/10. In our example this is 26*7 = 182 /
10 = 18, again discarding the remainder. Add this to our running total giving 82+18 =
100.
Finally just add the day DD. Here 100 + 23 = 123.Now divide the result by 7, just keeping the remainder; here 123(mod 7) = 4.
Counting Sunday as zero, Monday = 1 etc, we get 4 = Thursday. Easy, when you
know how :-) */

#include<stdio.h>
void main(){
int j,m,a,f,m1,a1,as,ns,Day;
printf("Enter the date:");
scanf("%d/%d/%d",&j,&m,&a);
if((m >= 3) && (m <= 12)){
m1 = m - 2;
printf("The new month value : %d\n", m);
printf("The year is: %d\n", a);
}
else if (m < 3){
m1 = m + 10;
a1 = a - 1;
printf("The new month is: %d\n", m);
printf("The year is: %d\n", a);
}
else{
printf("Enter corrext month\n");
}
as = a % 100;
ns = a / 100;
f = j + as + (as/4) - 2 * (ns / 4) + (26*m1 - 2/10);
Day = f % 7;

printf("The value of f %.2f\n", Day);
switch(Day){
case 0 :
printf("\nThis is sunday");
break;
case 1 :
printf("\nThis is monday");
break;
case 2 :
printf("\nThis is Tuesday");
break;
case 3:
printf("\nThis is wednesday");
break;
case 4:
printf("\nThis is Thursday");
break;
case 5:
printf("\nThis is Friday");
break;
case 6:
printf("\nThis is Saturday");
break;
default:
printf("Enter a correct value");
break;
}

}