#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    int n;

    scanf("%d", &n);

    double x = pow(n, (1/3));

    if (x * x * x == n) {
        printf("yes.\n");
    }
    else {
        printf("no.\n");
    }
         
    
    return 0;
}