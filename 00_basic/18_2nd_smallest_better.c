// 2nd smallest of 3 numbers
#include <stdio.h>
#include <limits.h>

int main (void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, min, min2;
        scanf("%d %d %d", &a, &b, &c);

        if (a < b) {
            min = a;
            min2 = b;
        }
        else {
            min = b;
            min2 = a;
        }

        if (c < min) {
            min2 = min;
            min = c;
        }
        else if ((c < min2 && c != min) || (min == min2 && c < min2)) 
            min2 = c;

        printf("%d", min2);
    }    


    return 0;
}
