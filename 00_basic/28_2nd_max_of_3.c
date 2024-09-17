#include <stdio.h>

int main (void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max, max2;

    if (a > b) {
        max = a;
        max2 = b;
    }
    else {
        max = b;
        max2 = a;
    }

    if (c > max) {
        other = max2;
        max2 = max;
        max = c;
    }
    else if ((c < max && max == max2) || (c > max2 && c != max)) {
        other = max2;
        max2 = c;
    }

    printf("%d %d", max, max2);
}