#include <stdio.h>
int main (void) {
    int Y;
    printf("Give a year:");
    scanf("%d", &Y);
    
    if (((Y % 4 == 0) && (Y % 100 != 0)) || (Y % 400 == 0)) {
        printf("Leap Year");
    }
    else {
        printf ("Not Leap Year");
    }
}
