/*Write a progream that inputs strings from the user. If the string is less than 80 characters long, pad it with
periods and print out the entire string*/

#include <stdio.h>
#include <string.h>

int main (void) {
    char s[80];
    gets(s);
    int n = strlen(s);
    if (n < 79) {
        for (int i = n; i < 79; i++) {
            s[i] = '.';
        }
        s[79] = '\0';
    }
    puts(s);
}



//teach yourself c solution

// int main () {
//     char str[80];

//     printf ("Enter a string: "); 
//     gets (str);

//     for (int i = strlen (str); i < 79; i++)
//         strcat (str, ".");
    
//     printf (str);

//     return 0;
// }