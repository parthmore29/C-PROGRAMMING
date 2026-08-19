#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, new_n, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter new number of elements: ");
    scanf("%d", &new_n);

    int *temp = (int *)realloc(arr, new_n * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.");
        free(arr);
        return 1;
    }

    arr = temp;

    if (new_n > n)
    {
        printf("Enter %d additional elements:\n", new_n - n);

        for (i = n; i < new_n; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    printf("\nUpdated elements:\n");

    for (i = 0; i < new_n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    printf("\n\nMemory released successfully.");

    return 0;
}
