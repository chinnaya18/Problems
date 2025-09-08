/* Consider an array of numbers from 1 to N . In this array, one of the numbers gets duplicated
and one is missing. Write a C program to find out the duplicated number. Condition: Using
only one loop and without any extra memory. */

#include <stdio.h>

int main() {
    int n;
    printf("Value for n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n, n);
    long long sum_arr = 0;
    long long sum_sq_arr = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum_arr += a[i];
        sum_sq_arr += (long long)a[i] * a[i];
    }


    long long sum_n = n * (n + 1) / 2;
    long long sum_sq_n = n * (n + 1) * (2 * n + 1) / 6;

    long long diff = sum_arr - sum_n;
    long long diff_sq = sum_sq_arr - sum_sq_n;

    if (diff == 0) {
        printf("No duplicates found\n");
        return 0;
    }

    long long sum_ab = diff_sq / diff;

    int duplicate = ((diff + sum_ab) / 2);
    int missing =(sum_ab - duplicate);

    printf("Duplicate number is: %d\n", duplicate);
    printf("Missing number is: %d\n", missing);

    return 0;
}
