#include <string.h>
#include <stdio.h>
#include <ctype.h>

void remove_leading_whitespace(char *s);
void remove_trailing_whitespace(char *s);

int main (void)
{
    char s[] = "   \n \n     this is the string content.          \n \n ";

    printf("Before: \n%s", s);

    remove_leading_whitespace(s);

    printf("\nAfter removing leading whitespace: \n%s", s);

    remove_trailing_whitespace(s);

    printf("\nAfter removing trailing whitespace: \n%s", s);

    return 0;
}

void remove_leading_whitespace(char *s)
{
    //count the number of whitespace or useless whitespace at the start
    //after we encounter a real character, we shift everything up by count

    int count = 0;

    while (isblank(s[count]) || isspace(s[count])) 
        count++;

    for (int i = 0; i <= (int)strlen(s) - count; i++)
    {
        s[i] = s[i + count];
    }

}


void remove_trailing_whitespace(char *s)
{
    //count the number of whitespaces from the end
    //then we just shift the NULL up by that amount

    int pos = strlen(s) - 1;
    while (isblank(s[pos]) || isspace(s[pos])) 
        pos--;

    s[pos+1] = '\0';
}