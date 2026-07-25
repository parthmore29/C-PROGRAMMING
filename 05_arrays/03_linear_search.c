#include<stdio.h>
int main()
{
    int a[5], i, key, found = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("%d is found in the array.\n", key);
    else
        printf("%d is not found in the array.\n", key);

    return 0;
}
