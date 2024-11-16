#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int word_count(char *string, char *word);

int main (void)
{
    char s[] = "zarif Zarif zarif japri";
    char word[] = "zarif";

    printf("Number of zarif's = %d", word_count(s, word));

    return 0;
}

int word_count(char string[], char word[]) {
    int n = strlen(string), m = strlen(word), count = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (string[i+j] != word[j])
                break;
        }
        if (j == m) {
            count++;
        }
    }
    return count;
}
