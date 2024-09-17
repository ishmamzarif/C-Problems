//niven num = divisible by the sum of its digits
#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);

    int s = (n % 10) + (n / 100) + ((n / 10) % 10);

    if (!(n % s))
        printf("Niven.\n");
    else    
        printf("Not Niven.\n");

    return 0;
}