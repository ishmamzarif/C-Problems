//check if a number is a valid power of 2
#include <stdio.h>
#include <math.h>

int main (void) {
    int n;
    scanf("%d", &n);

    if (n > 0 && (log2(n) == (int)log2(n)))
        printf("yes");
    else    
        printf("no");

    return 0;
}