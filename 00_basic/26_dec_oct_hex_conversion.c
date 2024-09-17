#include <stdio.h>

int main (void) {
    //decimal to hex or octal
    int a;
    printf("Enter dec = ");
    scanf("%d", &a);
    printf("Hex = %x\n", a);
    printf("Octal = %o\n", a);


    //oct to decimal and hex
    int b;
    printf("Enter oct = ");
    scanf("%o", &b);
    printf("Dec = %d\n", b);
    printf("Hex = %x\n", b);


    //hex to oct and decimal
    int c;
    printf("Enter hex = ");
    scanf("%x", &c);
    printf("Dec = %d\n", c);
    printf("Octal = %o\n", c);

    return 0;
}