#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5], i, max, min;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum element in array: %d\n", max);
    printf("Minimum element in array: %d\n", min);

    return 0;
}