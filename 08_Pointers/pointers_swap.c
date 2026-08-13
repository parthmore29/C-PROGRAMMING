#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}