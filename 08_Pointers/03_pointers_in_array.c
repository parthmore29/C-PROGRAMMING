#include <stdio.h>
int main()
{
    int numbers[5];
    int *ptr;
    int i, sum = 0;

    printf("Enter any 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    ptr = numbers;

    printf("\nArray elements using the pointer:\n");
    for(i = 0; i < 5; i++)
    {
        printf(" Element %d = %d\n", i + 1, *(ptr + i));
        sum = sum + *(ptr + i);
    }

    printf("\n Sum of all elements = %d\n", sum);
    printf("\n Addresses of the array elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Element %d address = %p\n",
               i + 1, (void *)(ptr + i));
    }

    return 0;
}