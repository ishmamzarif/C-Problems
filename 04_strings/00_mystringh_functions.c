#include <stdio.h>
#include <string.h>

int mystrlen(char s[]) {
    int i = 0;
    while (s[i]) i++;
    return i;
}

int mystrcmp(char s1[], char s2[]) {
    int len1 = mystrlen(s1), len2 = mystrlen(s2);
    if (len1 == len2) {
        for (int i = 0; i < len1; i++) {
            if (s1[i] != s2[i]) 
                //checks ascii values
                return s1[i] - s2[i];
        }
        return 0;
    }
    else if (len1 > len2) {
        for (int i = 0; i < len1; i++) {
            if (s1[i] != s2[i])
                return s1[i] - s2[i];
        }
    }
    else {
        for (int i = 0; i < len2; i++) {
            if (s1[i] != s2[i])
                return s1[i] - s2[i];
        }
    }
    return 0;
}

void mystrcpy(char to[], char from[]) {
    int n = mystrlen(from);
    for (int i = 0; i < n; i++)
        to[i] = from[i];
    to[n] = '\0';
}

int check_substr(char s[], char sub[]) {
    int n = mystrlen(s), m = mystrlen(sub);
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (s[i+j] != sub[j])
                break;
        }
        if (j == m)
            return 1;
    }
    return 0;
}


int main (void) {
    char s[] = "hello";
    char p[] = "hello";
    char q[] = "my name is rahman";
    char t[] = "i love her";

    printf("%d %d %d %d", mystrlen(s), mystrlen(p), mystrlen(q), mystrlen(t));
    

    return 0;
}