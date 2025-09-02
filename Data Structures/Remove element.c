/* Given a string, eliminate all “b” and “ac” in the string, you have to replace them in-
place, and you are only allowed to iterate over the string once.
Examples:

acbac ==&gt; &quot;&quot;
aaac ==&gt; aa
ababac ==&gt; aa
bbbbd ==&gt; d */

#include <stdio.h>

void remove_b_ac(char *str) {
    int i = 0;
    int j = 0;
    while (str[i]) {
        if (str[i] == 'b') {

            i++;
        } else if (str[i] == 'a' && str[i + 1] == 'c') {

            i += 2;
        } else {

            str[j++] = str[i++];
        }
    }



    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    remove_b_ac(str);

    printf("Modified string: \"%s\"\n", str);

    return 0;
}
