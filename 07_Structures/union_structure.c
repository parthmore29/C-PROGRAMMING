//union structure in C
#include<stdio.h>

union Data
{
    int id;
    float salary;
    char name[30];
};
int main()
{
    union Data data;

    printf("=========UNION DEMONSTRATION=========\n");

    printf("EMPLOYEE ID*:  ");
    scanf("%d", &data.id);
    printf("EMPLOYEE ID: %d\n", data.id);

    printf("EMPLOYEE SALARY*:  ");
    scanf("%f", &data.salary);
    printf("EMPLOYEE SALARY: %.2f\n", data.salary);

    printf("EMPLOYEE NAME*:  ");
    scanf(" %[^\n]", data.name);
    printf("EMPLOYEE NAME: %s\n", data.name);

    printf("\n====================================\n");
    printf("Only one union member is safely stored at a time.\n");

    return 0;

}
