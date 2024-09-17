//smallest of four using nested if-else
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a < b) {
        if (a < c) {
            if (a < d) {
                printf("%d", a);
            }
            else    
                printf ("%d", d);
        }
        else { 
            if (c < d) {
                printf("%d", c);
            }
            else {
                printf("%d", d);
            }
        }
    }
    else {
        if (b < c) {
            if (b < d) {
                printf("%d", b);
            }
            else    
                printf ("%d", d);
        }
        else { 
            if (c < d) {
                printf("%d", c);
            }
            else {
                printf("%d", d)
            }
        }
    } 
         
    
    return 0;
}