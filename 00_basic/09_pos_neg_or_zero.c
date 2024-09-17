#include <stdio.h>
int main (void) {
    int N;
    printf("Give any number:");
    scanf("%d",&N);
    if(N==0){
        printf("The number is zero");
    }else if(N>0){
        printf("The number is positive");
    }else{
        printf("The number is negative");
    }
}