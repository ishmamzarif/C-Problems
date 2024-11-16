#include <stdio.h>
#include <string.h>

int main (void)
{
    char delim, s[80];
    gets(s);
    scanf("%c", &delim);
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] == delim) {
            s[i] = '\n';
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') continue;
        else printf("%c", s[i]);
    }

    return 0;
}