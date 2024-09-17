//only possible if we know the number of digits
#include <stdio.h>

int main (void)
{
    int n; //any 4-digit number
    scanf("%d", &n);

    int reversed = (n % 10) * 1000 + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + (n / 1000);

    if (n == reversed)
        printf("Palindrome.\n");
    else   
        printf("Not a palindrome.\n");

    return 0;
}