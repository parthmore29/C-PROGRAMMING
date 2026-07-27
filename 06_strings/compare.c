#include<stdio.h>
#include<string.h>

int main()
{
    char first[50];
    char second[50];

    printf("Enter the first string : ");
    scanf("%s", first);

    printf("Enter the second string: ");
    scanf("%s", second);

    if(strcmp(first, second)== 0)
    {
        printf("Both Strings are SAME");
    }
    else
    {
        printf("Both strings are DIFFRENT");
    }
    return 0;

}