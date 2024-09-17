#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    
    int r = (n % 10) * 1000 + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + n / 1000;

    //or
    
    // r = (r * 10) + (n % 10);
    // n /= 10;

    // r = (r * 10) + (n % 10);
    // n /= 10;

    // r = (r * 10) + (n % 10);
    // n /= 10;

    // r = (r * 10) + (n % 10);
    // n /= 10;



    
    printf("%d", r);
    
    return 0;
}


