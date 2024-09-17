#include <stdio.h>

int main (void) {
    char c;
    int n;
    scanf("%c %d", &c, &n);

    n %= 26;
    c -= 'a';

    n = (n + c) % 26;

    printf("%c", 'a' + n);

    return 0;
}