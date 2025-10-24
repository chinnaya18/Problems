#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areIsomorphic(const char *s, const char *t) {
    int n = strlen(s);
    int m = strlen(t);
    if (n != m) {
        return false;
    }

    int mapS2T[256];
    int mapT2S[256];
    for (int i = 0; i < 256; i++) {
        mapS2T[i] = -1;
        mapT2S[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];

        if (mapS2T[c1] == -1 && mapT2S[c2] == -1) {
            mapS2T[c1] = c2;
            mapT2S[c2] = c1;
        } else {
            if (mapS2T[c1] != c2 || mapT2S[c2] != c1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char s[1000], t[1000];
    printf("Enter string s: ");
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;
    printf("Enter string t: ");
    if (fgets(t, sizeof(t), stdin) == NULL) return 1;


    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
    len = strlen(t);
    if (len > 0 && t[len-1] == '\n') t[len-1] = '\0';

    if (areIsomorphic(s, t)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
