//check if 2 numbers have the same sign
#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a * b < 0)
        printf("no\n");
    else 
        printf("yes\n");

    return 0;
}