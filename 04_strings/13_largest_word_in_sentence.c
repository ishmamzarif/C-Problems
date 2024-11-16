#include <stdio.h>
#include <string.h>

int main (void)
{
    char s[80];
    fgets(s, 79, stdin);

    int n = strlen(s);

    int left = 0, right = 0;
    int maxCount = 0, count = 0, prev = 0;
    for (int i = 0; i < n; i++) {
        if ((('A' <= s[i]) && (s[i] <= 'Z')) || (('a' <= s[i]) && (s[i] <= 'z'))) {
            count++;
        }
        else {
            if (count > maxCount) {
                maxCount = count;
                left = prev;
                right = left + count;
            }
            count = 0;
            prev = i+1;
        }
    }

    for (int i = left; i < right; i++) {
        printf("%c", s[i]);
    }

    return 0;
}