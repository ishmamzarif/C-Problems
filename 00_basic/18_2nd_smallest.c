// 2nd smallest of 3 numbers
#include <stdio.h>
#include <limits.h>

int main (void) {
    int a, b, c, min, min2;
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && (a == c)) {                         //for case 5, 5, 5
        printf("They are all equal. (2nd min does not exist)\n");
    }
    else if (a == b) { //case 5 5 3
        if (a < c)
            min2 = c;
        else    
            min2 = a;
    }
    else if (a == c) { //case 5 3 5
        if (a < b) 
            min2 = b;
        else
            min2 = a;
    }
    else if (b == c) { // case 3 5 5
        if (b < a)
            min2 = a;
        else 
            min2 = b;
    }
    else {             // case 3 4 5 (all pairs unequal)
        min = (a < b) ? a : b;
        min2 = (c < min) ? min : c;
    }

    printf("%d", min2);

    return 0;
}
