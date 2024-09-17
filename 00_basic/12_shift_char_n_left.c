#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    char c;
    int n;

    scanf("%c %d", &c, &n);

    c -= 'a';
    n %= 26;

    n = (c - n + 26) % 26;

    printf("%c", n + 'a');
    
    return 0;
}