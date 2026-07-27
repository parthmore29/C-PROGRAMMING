#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i, length;

    printf("Enter a word: ");
    scanf("%s", str);

    length = strlen(str);

    printf("Reversed string: ");
    for(i= length - 1; i>= 0; i--)
    {
        printf("%c", str[i]);
    }
return 0;
}