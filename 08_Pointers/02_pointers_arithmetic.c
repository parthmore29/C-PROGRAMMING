#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("The 1st element: %d\n", *ptr);
    printf("The 2nd element: %d\n", *(ptr + 1));
    printf("The 3rd element: %d\n", *(ptr + 2));

    ptr++;

    printf("\nAfter ptr++:\n");
    printf("Current element: %d\n", *ptr);

    ptr = ptr + 2;

    printf("After ptr + 2: %d\n", *ptr);

    ptr--;

    printf("After ptr--: %d\n", *ptr);

    return 0;
}