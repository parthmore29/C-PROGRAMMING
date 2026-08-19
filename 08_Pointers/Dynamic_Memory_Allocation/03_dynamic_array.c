#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("\n--- DYNAMIC ARRAY RESULT ---\n");

    printf("Elements: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSum     : %d", sum);
    printf("\nAverage : %.2f", average);

    printf("\n\nMemory allocated dynamically: %d bytes",
           n * sizeof(int));

    free(arr);

    printf("\nMemory released successfully.");

    return 0;
}
