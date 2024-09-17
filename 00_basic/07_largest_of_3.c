/*
//using conditionals
#include <stdio.h>
int main (void) {
    float A,B,C;
    printf("Give three numbers:");
    scanf("%f%f%f", &A,&B,&C);
    if((A>B)&&(A>C)){
        printf ("%f is larger",A);
    }else if((B>C)&&(B>A)){
        printf ("%f is larger",B);
    }else{
        printf ("%f is larger", C);
    }

}
*/
//using nested if
/*
#include <stdio.h>
int main (void) {
    float A,B,C;
    printf ("Give any three numbers:");
    scanf ("%f%f%f",&A,&B,&C);
    if (A>B){
        if (A>C){
            printf ("%f is larger", A);
        }else{
            printf ("%f is larger", C);
        }
    }else if (B>A){
        if (B>C) {
            printf ("%f is larger", B);
    }else{
            printf ("%f is larger", C);
        }
    }
}
*/



#include <stdio.h>

int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    printf ("Largest : %d", max);

    return 0;
}
