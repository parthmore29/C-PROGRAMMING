#include <stdio.h>

int main()
{
    int number;
    float decimal;
    char letter;

    int *pNumber = &number;
    float *pDecimal = &decimal;
    char *pLetter = &letter;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a decimal number: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &letter);

    printf("\n--- Memory Inspector ---\n\n");

    printf("Integer\n");
    printf("Value   : %d\n", *pNumber);
    printf("Address : %p\n\n", (void *)pNumber);

    printf("Float\n");
    printf("Value   : %.2f\n", *pDecimal);
    printf("Address : %p\n\n", (void *)pDecimal);

    printf("Character\n");
    printf("Value   : %c\n", *pLetter);
    printf("Address : %p\n\n", (void *)pLetter);

    printf("--- Pointer Sizes ---\n");
    printf("Size of int pointer   : %zu bytes\n", sizeof(pNumber));
    printf("Size of float pointer : %zu bytes\n", sizeof(pDecimal));
    printf("Size of char pointer  : %zu bytes\n", sizeof(pLetter));

    return 0;
}