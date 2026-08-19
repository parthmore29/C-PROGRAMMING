#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Memory using malloc()
    int *a =(int *)malloc(n*sizeof(int));

    if (a ==  NULL)
    { printf("Memory allocation failed.");
        return 1;
    }
    printf("\nEnter %d elements for maloc: \n", n);
    for (i = 0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }
    //Memory using calloc()
    int *b = (int *)calloc(n, sizeof(int));

    if(b==NULL)
    {
        printf("\nMemory allocation failed.");
        free(a);
        return 1;
    }
    printf("\n\nElements initially stored using calloc.");
    for (i=0; i<n ; i++)
    {
        printf("%d", b[i]);    
    }

    free(a);
    free(b);

    return 0;

}