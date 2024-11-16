#include <string.h>
#include <stdio.h>
#include <ctype.h>

int count_word(char *s);

int main (void)
{
    char s[] = "My name is Zarif. What's your name? Is your name Ishmam? I never would've guessed, such a pretty name";

    printf("%d", count_word(s));

    return 0;
}


int count_word(char *p)
{
    int count = 0; 
    int len = strlen(p);
    char delimiters[] = " .,\n\t;?!/";

    for (int i = 0; i < len; i++)
    {
        while (i < len)
        {
            if (strchr(delimiters, p[i]) != NULL)
                break;
            i++;
        }
        count++;

        while (i < len)
        {
            if (strchr(delimiters, p[i]) == NULL)
                break;
            i++;
        }
    }

    return count;
}