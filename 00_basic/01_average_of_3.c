#include <stdio.h>
int main (void) {
    float a, b, c, average; 

    printf ("Give value of a, b, and c : ");
    scanf ("%f %f %f", &a, &b, &c);
    
    average = (a + b + c) / 3;
    printf ("Average = %f", average);
}