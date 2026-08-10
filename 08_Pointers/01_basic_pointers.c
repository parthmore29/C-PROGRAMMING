#include<stdio.h>

int main()
{
    int no;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &no);

    ptr = &no;

    printf("Value of the number = %d\n", no);
    printf("Address of the number = %p\n", (void*)&no);
    printf("Value of the variable pointed to by ptr = %d\n", *ptr);
    printf("Address of the variable pointed to by ptr = %p\n", (void*)ptr);   

    return 0;
}