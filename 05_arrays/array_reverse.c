#include<stdio.h>

int main()
{
    int a[5], i, temp;

    printf("ENTER 5 ELEMENTS:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reversing the array
    for(i = 0; i < 2; i++)
    {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    printf("REVERSED ARRAY:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}