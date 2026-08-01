#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
    int pin;
};

struct Employee
{
    char name[30];
    int id;
    char department[30];
    float salary;
    struct Address address;
};

int main()
{
    struct Employee e;

    printf("EMPLOYEE NAME*:  ");
    scanf(" %[^\n]", e.name);

    printf("EMPLOYEE ID*:  ");
    scanf("%d", &e.id);

    printf("DEPARTMENT*:  ");
    scanf(" %[^\n]", e.department);

    printf("SALARY*:  ");
    scanf("%f", &e.salary);

    printf("CITY*:  ");
    scanf(" %[^\n]", e.address.city);

    printf("STATE*:  ");
    scanf(" %[^\n]", e.address.state);

    printf("PIN CODE*:  ");
    scanf("%d", &e.address.pin);

    printf("\n========== EMPLOYEE DETAILS ==========\n");
    printf("Name       : %s\n", e.name);
    printf("ID         : %d\n", e.id);
    printf("Department : %s\n", e.department);
    printf("Salary     : %.2f\n", e.salary);
    printf("--------------------------------------\n");
    printf("City       : %s\n", e.address.city);
    printf("State      : %s\n", e.address.state);
    printf("PIN Code   : %d\n", e.address.pin);
    printf("======================================\n");

    return 0;
}