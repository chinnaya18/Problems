/* Write a program to check whether two given strings are anagram of each other or not.
An anagram of a string is another string that contains same characters, only the order
of characters can be different. For example, “abcd” and “dabc” are anagram of each
other. */
#include <stdio.h>
#define CHAR_RANGE 256

int areAnagrams(char str1[], char str2[]) {
    int count[CHAR_RANGE] = {0};


    if (strlen(str1) != strlen(str2))
        return 0;


    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)tolower(str1[i])]++;
        count[(unsigned char)tolower(str2[i])]--;
    }


    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams of each other.\n");
    else
        printf("The strings are NOT anagrams of each other.\n");

    return 0;
}
