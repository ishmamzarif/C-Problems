#include <stdio.h>
int main (void) {
    int N;
    printf ("Give Marks of a Student:");
    scanf ("%d", &N);
    if (N>=80) {
        printf ("Grade is A");           
    }
    if ((N>=70) && (N<=79)) {
        printf ("Grade is B");
    }
    if ((N>=60) && (N<=69)) {
        printf ("Grade is C");
    }
    if (N<60) {
    printf ("Grade is D");      
    }
    return 0;
}