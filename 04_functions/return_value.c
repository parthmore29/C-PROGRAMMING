#include<stdio.h>
int square(int n)
{
    return n*n;
}

int main()
{
    int number, result;
    printf("ENTER A NUMBER: ");
    scanf("%d", &number);
    result = square(number);
    printf("SQUARE OF %d IS %d", number, result);
    return 0;
}
