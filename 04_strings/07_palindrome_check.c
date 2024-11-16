#include <stdio.h>
#include <string.h>

//most intuitive approach
int check_palindrome(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i])
            return 0;
    }
    return 1;
}

//same thing but with 2 pointers
int check_palindrome(char s[]) {
    int n = strlen(s);
    int i = 0, j = n-1;
    while (i < j) {
        if (s[i++] != s[j--]) {
            return 0;
        }
    }
    return 1;
}

//simple churi
int check_palindrome(char s[]) {
    char r[80];
    strcpy(r, s); // r = s;
    strrev(r);
    if (strcmp(r, s) == 0) return 1;
    else return 0;
}

int main (void)
{
    char s[80];
    gets(s);

    (check_palindrome(s)) ? printf("Yes\n") : printf("No\n");

    return 0;
}

