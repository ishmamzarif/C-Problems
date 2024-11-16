#include <string.h>
#include <ctype.h>
#include <stdio.h>

int largest_word(char *p);
int smallest_word(char *p);

int main (void)
{
    char s[] = "my name is zarif ishmam";

    printf("Length of smallest = %d and largest = %d", smallest_word(s), largest_word(s));

    return 0;
}






int largest_word(char *p)
{
    int len = strlen(p);
    int count = 0;
    int max = -1;
    char delim[] = " ,.\n\t?!/;'";

    int i = 0;
    while (i < len)
    {
        count = 0;
        while (i < len)
        {
            if (strchr(delim, p[i]) != NULL)
                break;
            i++;
            count++;
        }
        
        if (count > max) 
            max = count;

        while (i < len)
        {
            if (strchr(delim, p[i]) == NULL)
                break;
            i++;
        }
    }

    return max;
}


int smallest_word(char *p)
{
    int len = strlen(p);
    int count = 0;
    int min = 200;
    char delim[] = " ,.\n\t?!/;'";

    int i = 0;
    while (i < len)
    {
        count = 0;
        while (i < len)
        {
            if (strchr(delim, p[i]) != NULL)
                break;
            i++;
            count++;
        }
        
        if (count < min) 
            min = count;

        while (i < len)
        {
            if (strchr(delim, p[i]) == NULL)
                break;
            i++;
        }
    }

    return min;
}