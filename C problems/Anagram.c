#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isAnagram(const char *str1, const char *str2){
    int n,m,c1,c2,i,c3=0,c4=0;

    n = strlen(str1);
    m = strlen(str2);

    if(n != m) return false;

    for(i=0;i<n;i++){
        unsigned char c1 = tolower(str1[i]);
        unsigned char c2 = str2[i];
        c3 += c1;
        c4 += c2;
    }

    if(c3 != c4){
        return false;
    }


   return true ;
}

int main(){

    char s[1000], t[1000];
    printf("Enter string s: ");
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;
    printf("Enter string t: ");
    if (fgets(t, sizeof(t), stdin) == NULL) return 1;


    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
    len = strlen(t);
    if (len > 0 && t[len-1] == '\n') t[len-1] = '\0';

    if (isAnagram(s, t)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

