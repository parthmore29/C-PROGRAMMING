#include<stdio.h>
int main()
{
    int a[5], i, key, found = 0;

    printf("Enter 5 elements in sorted order:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int left = 0, right = 4;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(a[mid] == key)
        {
            found = 1;
            break;
        }
        else if(a[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if(found)
        printf("%d is found in the array.\n", key);
    else
        printf("%d is not found in the array.\n", key);

    return 0;
}
