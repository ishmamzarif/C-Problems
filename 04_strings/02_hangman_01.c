/*Write a program that plays a computerized version of Hangman. In the game of Hangman, you are shown the length
of a magic word (using hyphens) and you try to guess what the word is by entering letters. Each time you enter a letter,
the magic word is checked to see if it contains that letter. If it does, that letter is shown. Keep a count on the number of
letters entered to complete the word. For the sake of simplicity, a players wins when the magic word is entirely filled by
characters using 15 or fewer guesses. Let the magic word be "concatenation"*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main (void) {
    again:
    srand(time(NULL));                                                  //assigns a random number to n
    int n = rand() % 20 + 1;
    char *words[80] = {"concatenation", "transparency", "ersatz", "obnoxious", "abolishment", "hello", "president", "extraordinary", "melodramatic", "recursion",
                        "angry", "twice", "strikethrough", "reference", "appointment", "application", "punctuation", "hangman", "function", "prototype"};

    char *magic = words[n];                                             //assigns the n-th "random" word to *magic string
    char blank[80];

    int i;
    for (i = 0; magic[i]; i++) blank[i] = '-';                          //blank contains as many hyphens as letters in the to be guessed word
    blank[i] = '\0';


    int tries = 20;
    char guess, p, try;

    printf ("Guess the magic word : %s\n", blank);

    while (tries) {
        printf ("Tries left : %d\n", tries);
        printf ("Enter a letter : ");
        guess = getchar();
        p = getchar();

        for (int i = 0; i < (int)strlen(magic); i++) {                      //if the guess matches any words, those words are filled up in the blank array and shown later
            if (guess == magic[i])
                blank[i] = magic[i];
        }

        printf ("\nSo far, you have guessed : %s\n", blank);                //this displays the letters i have guessed so far
        tries--;

        if (!strcmp (blank, magic)) {                                       //if i have guessed all the letters, "Success!" and exits the loop
            printf ("\nYou have guessed the word correctly!\n");
            printf ("Do you want to play again? (Y/N) : ");
            try = getchar(); p = getchar();

            printf("\n");
            if (try == 'Y') goto again;
            break;
        }
    }

    if (tries == 0) {                                                       //display if i run out of tries
        printf ("\nTries left : 0. You have failed.\n");
        printf ("Do you want to try again? (Y/N) : ");
        try = getchar(); p = getchar();

        printf("\n");
        if (try == 'Y') goto again;                                         //by typing 'Y', i can play the game again
    }

    if (tries == 2000) printf ("%c", p);                                    //p is just a random variable to get rid of the input buffer that getchar() causes


    return 0;
}



