#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void remove_char(char *string, char r);

int main (void)
{
    char s[] = "zarif zarif parif";

    remove_char(s, 'a');

    printf("%s", s);

    return 0;
}

void remove_char(char *s, char r) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == r) {
            for (int j = i; j < n-1; j++) {
                s[j] = s[j+1];
            }
            s[n--] = '\0';
        }
    }
}

