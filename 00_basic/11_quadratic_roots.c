#include <stdio.h>
#include <math.h>
int main (void) {
    float a, b, c, root1, root2, D, realpart, imaginarypart;
    
    printf("Give the co-efficients a, b, and c : ");
    scanf("%f %f %f", &a, &b, &c);

    D = pow (b, 2) - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt (D)) / (2*a);
        printf ("The roots are: %f %f", root1, root2);
    }
    if (D < 0) {
        realpart = -b / (2*a);
        imaginarypart = sqrt(-D) / (2*a);
        printf ("The roots are: %f+%fi %f-%fi", realpart, imaginarypart, realpart, imaginarypart);
        
    }
    if (D == 0) {
        root1 = -b / 2*a;
        root2 = -b / 2*a;
        printf ("The roots are: %f %f", root1, root2);
    }
    return 0;
    

}