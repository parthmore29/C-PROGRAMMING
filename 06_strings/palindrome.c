#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, length, ispalindrome=1;

    printf("ENTER A STRING: ");
    scanf("%s", str);

    length=strlen(str);

    for(i=0; i< length/2; i++)

    {
        if(str[i] != str[length-i-1])
        {
            ispalindrome = 0;
            break;
        }
    }
    if(ispalindrome)
        printf("String is a palindrome");
    else
        printf("the string is not a palindrome");
    return 0;
}







