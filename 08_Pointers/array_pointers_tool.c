#include<stdio.h>

int main()
{
int numbers[10];
int *ptr ;
int sum = 0;
int largest, smallest;
float average;

printf("Enter 10 numbers:\n");

for(int i = 0; i < 10; i++)
{
    printf("Number %d: ", i + 1);
    scanf("%d", &numbers[i]);
}

ptr = numbers;

largest=*ptr;
smallest=*ptr;

for(int i = 0; i < 10; i++)
{
    sum = *(ptr + i);

    if(*(ptr + i) > largest)
    {
        largest = *(ptr + i);
    }

    if(*(ptr + i) < smallest)
    {
        smallest = *(ptr + i);
    }
}

average = (float)sum / 10;

printf("\n------Array Analysis------\n");

printf("ELEMENTS:\n");
for(int i = 0; i < 10; i++)
{
    printf("%d ", *(ptr + i));
}

printf("\n\nSum    : %d\n", sum);
printf("Average: %.2f\n", average);
printf("Largest: %d\n", largest);
printf("Smallest: %d\n", smallest);

printf("\n------Pointer Addresses------\n");
for(int i = 0; i < 10; i++)
{
    printf("ELEMENT %d -> value: %d | address: %p\n", i + 1, *(ptr + i), (void *)(ptr + i));
}

return 0;
}
