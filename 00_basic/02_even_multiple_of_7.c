#include <stdio.h>

int main (void) {
    int N;
    printf("Give any number : ");
    scanf("%d",&N);

    if (N % 14 == 0) {
        printf("True");
    }
    else {
        printf("False");
    }
}