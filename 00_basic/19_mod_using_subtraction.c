//calculate modulus using subtraction
#include <stdio.h>

int main (void) {
    int a, b;
    printf("Enter a and b = ");
    scanf("%d %d", &a , &b);

    //we want a % b 
    int d = a / b;
    int r = a - (d * b);

    printf("a mod b = %d", r);

}