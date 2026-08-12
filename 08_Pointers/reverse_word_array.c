#include<stdio.h>
#include<string.h>

int main()
{
    char words[50][30];
    char temp[30];
    char (*ptr)[30] = words;
    int i,j;

    printf("Enter any 5 words:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Word %d: ", i + 1);
        scanf("%29s", *(ptr + i));
    }

    for(i = 0; i < 2; i++)
    {
        strcpy(temp, *(ptr + i));
        strcpy(*(ptr + i), *(ptr + 4 - i));
        strcpy(*(ptr + 4 - i), temp);
    }

    printf("\n--- Reversed Word Array ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s ", *(ptr + i));
    }

    printf("\n");

    return 0;
}