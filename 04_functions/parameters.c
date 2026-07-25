#include <stdio.h>

void calculateResult(int maths, int physics, int chemistry)
{
    int total = maths + physics + chemistry;
    float percentage = total / 3.0;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
}

int main()
{
    int maths, physics, chemistry;

    printf("Enter Maths marks: ");
    scanf("%d", &maths);

    printf("Enter Physics marks: ");
    scanf("%d", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);

    calculateResult(maths, physics, chemistry);

    return 0;
}
