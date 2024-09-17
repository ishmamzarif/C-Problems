#include <stdio.h>

int main() {
    int n;
    scanf("%i%*c", &n);
    //........^%*c eats up the Enter ('\r' of ASCII value 10) in the buffer
    //........we can also do getchar()
    
    putchar((n / 1000) + '0');
    putchar(((n / 100) % 10) + '0');
    putchar(((n / 10) % 10) + '0');
    putchar((n % 10) + '0');
    putchar('\n');

    int a, b, c, d;
    a = getchar() - '0';
    b = getchar() - '0';
    c = getchar() - '0';
    d = getchar() - '0';

    printf("%i", (a * 1000) + (b * 100) + (c * 10) + (d));
    return 0;
}