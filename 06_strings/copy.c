#include<stdio.h>
#include<string.h>

int main()
{
    char orignal[50];
    char copy[50];

    printf("Enter a word: ");
    scanf("%s", orignal);

    strcpy(copy, orignal);

    printf("Orignal string : %s\n", orignal);
    printf("copied string: %s",copy);

    return 0;
    
}