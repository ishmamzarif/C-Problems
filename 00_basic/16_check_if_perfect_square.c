//check if a perfect square
#include <stdio.h>
#include <math.h>

int main (void)
{
    int n;
    scanf("%d", &n);

    double x = sqrt(n);

    if (x * x == n)
        printf("Perfect square.\n");
    else
        printf("not\n");

    return 0;
}