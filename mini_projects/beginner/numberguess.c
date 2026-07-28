#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = rand() % 100 ;

    printf("\n+------------------------------+");
    printf("\n|      NUMBER GUESSING GAME    |");
    printf("\n+------------------------------+\n");

    printf("\nCHECK YOUR LUCK! GUESS A NUMBER BETWEEN 1 TO 100.\n");
    printf("Try to guess it!\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secret)
            printf("Too high! Try again.");
        else if(guess < secret)
            printf("Too low! Try again.");
        else
            printf("\nCorrect! You found the number in %d attempts! ", attempts);

    } while(guess != secret);

    printf("\n\nyou will recive a goodnews in next 24 hours if you guessed it in between 7 guesses! Thanks for playing! \n");

    return 0;
}