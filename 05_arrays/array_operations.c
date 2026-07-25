#include <stdio.h>
int main()
{
    int a[5], i;
int sum = 0, max, min;
float avg;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for(i = 0; i < 5; i++)
    {
        sum += a[i];
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

avg = (float)sum / 5;
printf("\nSum: %d\n", sum);
printf("Average: %.2f\n", avg);
printf("Maximum: %d\n", max);
printf("Minimum: %d\n", min);

    return 0;
}