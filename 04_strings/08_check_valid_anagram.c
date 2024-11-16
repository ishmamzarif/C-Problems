#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_anagram(char a[], char b[]) {
    int count[26] = {0};
    
    int n = strlen(a), m = strlen(b);

    for (int i = 0; i < n; i++) count[tolower(a[i]) - 'a']++;
    for (int i = 0; i < m; i++) count[tolower(b[i]) - 'a']--;

    for (int i = 0; i < 26; i++) {
        // printf("Count for %c is %d\n", i + 'a', count[i]);
        if (count[i] != 0) return 0;
    }
    return 1;
}

int main (void)
{
    char s[80], t[80];
    fgets(s, 79, stdin); fgets(t, 79, stdin);

    (check_anagram(s, t)) ? printf("Yes\n") : printf("No\n");

    return 0;
}