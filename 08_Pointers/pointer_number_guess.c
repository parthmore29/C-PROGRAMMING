#include <stdio.h>

int main()
{
    int secret = 42;
    int guess;
    int *ptr = &secret;
    int attempts = 0;

    printf("================================\n");
    printf("       POINTER GUESSING GAME\n");
    printf("================================\n");

    printf("\nGuess the secret number between 1 and 50!\n");

    do
    {
        printf("\nYour guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess < *ptr)
            printf("Too low! Try again.\n");
        else if(guess > *ptr)
            printf("Too high! Try again.\n");
        else
            printf("\nCorrect! You found it in %d attempts.\n", attempts);

    } while(guess != *ptr);

    printf("\nSecret value accessed through pointer: %d\n", *ptr);
    printf("Memory address of secret: %p\n", (void *)ptr);

    printf("\n================================\n");
    printf("        Adventure complete.\n");
    printf("================================\n");

    return 0;
}