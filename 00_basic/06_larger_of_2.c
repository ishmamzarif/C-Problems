#include <stdio.h>

int main () {
    int a, b;

    print ("Give two integers : ");
    scanf ("%d %d", &a, &b);
    printf ("larger: %d", (a > b) ? a : b);

    return 0
}
