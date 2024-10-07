//for loop
#include <stdio.h>
int main (void) {
    for (int i = 0; i < 9; ++i) 
  //for (int i = 1; i <= 9; ++i) also works 
        printf("Hi\n");  
}

//while loop
#include <stdio.h> 
int main (void) {
    int i = 0;

    while (i < 9) {
        printf("Hi");
        i++;
    }
}


//do.. while loop
#include <stdio.h>
int main (void) {
    int i = 0;
    
    do {
        printf("Hi");
        i += 1;
    } while (i < 9);
}

