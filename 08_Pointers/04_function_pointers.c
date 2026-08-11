// This program demonstrates the use of pointers in C to swap two numbers and calculate their sum and difference.

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp =*a;
    *a =*b;
    *b =temp;
}

void calculate(int*a, int*b, int*sum, int*difference)
{
    *sum = *a + *b;
    *difference = *a - *b;
}

int main()
{
    int x,y;
    int sum, difference;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    calculate(&x, &y, &sum, &difference);

    printf("\nAfter calculation:\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);

    return 0;
}