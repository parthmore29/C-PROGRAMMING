#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int length;

    printf("ENTER THE NAME: ");
    scanf("%s", name);

    length=strlen(name);

    printf("LENGTH OF YOUR NAME IS %d", length);
return 0;
}