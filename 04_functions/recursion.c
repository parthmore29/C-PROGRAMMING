#include<stdio.h>
int factorial(int n)
{
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    printf("FACTORIAL OF %d IS %d", n, factorial(n));
    return 0;
}