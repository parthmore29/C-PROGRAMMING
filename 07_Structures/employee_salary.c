#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e;

    printf("ENTER EMPLOYEE NAME: ");
    scanf(" %[^\n]", e.name);

    printf("YOUR EMPLOYEE ID: ");
    scanf("%d", &e.id);

    printf("BASIC SALARY(in dollars): ");
    scanf("%f", &e.basic);

    e.hra = e.basic * 0.20;
    e.da = e.basic * 0.10;
    e.gross = e.basic + e.hra + e.da;

    printf("\n========== EMPLOYEE SALARY ==========\n");
    printf("NAME         : %s\n", e.name);
    printf("Employee ID  : %d\n", e.id);
    printf("-------------------------------------\n");
    printf("BASIC SALARY : $%.2f\n", e.basic);
    printf("HRA (20%%)    : $%.2f\n", e.hra);
    printf("DA (10%%)     :$%.2f\n", e.da);
    printf("-------------------------------------\n");
    printf("Gross Salary : %.2f\n", e.gross);
    printf("=====================================\n");

    return 0;
}