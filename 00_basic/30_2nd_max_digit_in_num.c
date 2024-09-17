//we output the 2nd max number in a 4-digit number (can be scaled for any number of digits)
#include <stdio.h>

int main (void) {
    int n, r, max, max2 = 0;
    scanf("%d", &n);

    r = (n % 10);
    max = r;
    n /= 10;

    r = (n % 10);
    if (r > max) {
        max2 = max;
        max = r;
    }
    else if (r > max2 && r != max) {
        max2 = r;
    }
    n /= 10;

    r = (n % 10);
    if (r > max) {
        max2 = max;
        max = r;
    }
    else if (r > max2 && r != max) {
        max2 = r;
    }
    n /= 10;

    r = (n % 10);
    if (r > max) {
        max2 = max;
        max = r;
    }
    else if (r > max2 && r != max) {
        max2 = r;
    }
    n /= 10;
    

    printf("%d", max2);

    return 0;
}