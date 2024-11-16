#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main (void)
{
    char s[80] = "alakdjalskjdfadsafei";

    //program to check most frequent char
    int n = strlen(s), count[26] = {0};
    for (int i = 0; i < n; i++) {
        count[tolower(s[i]) - 'a']++;
    }

    int max_idx = 0;
    for (int i = 1; i < 26; i++) {
        if (count[i] > count[max_idx])
            max_idx = i;
    }

    printf("The most frequent char in string is: %c", max_idx + 'a');

    return 0;
}

//SAME BHABE LEAST OCCURING TAO BER KORA JABE