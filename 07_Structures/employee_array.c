#include <stdio.h>

struct Employee
{
    char name[30];
    int id;
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        e[i].hra = e[i].basic * 0.20;
        e[i].da = e[i].basic * 0.10;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\n================ EMPLOYEE SALARY SHEET ================\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEmployee %d | ID: %d\n", i + 1, e[i].id);
        printf("Name         : %s\n", e[i].name);
        printf("Basic Salary : %.2f\n", e[i].basic);
        printf("HRA (20%%)    : %.2f\n", e[i].hra);
        printf("DA (10%%)     : %.2f\n", e[i].da);
        printf("Gross Salary : %.2f\n", e[i].gross);
        printf("-------------------------------------------------------\n");
    }

    return 0;
}
