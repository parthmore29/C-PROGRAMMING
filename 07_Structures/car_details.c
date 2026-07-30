#include <stdio.h>

struct Car
{
    char brand[30];
    char model[30];
    char fuel[20];
    int year;
    float price;
};

int main()
{
    struct Car c;
    int age;

    printf("ENTER THE CAR BRAND: ");
    scanf(" %[^\n]", c.brand);

    printf("ENTER THE CAR MODEL: ");
    scanf(" %[^\n]", c.model);

    printf("ENTER THE FUEL TYPE: ");
    scanf(" %[^\n]", c.fuel);

    printf("MANUFACTURING YEAR: ");
    scanf("%d", &c.year);

    printf("CAR PRICE(in rupees): ");
    scanf("%f", &c.price);

    age = 2026 - c.year;
    printf("\t\t processing, wait");
    printf("\n========== CAR DETAILS ==========\n");
    printf("Brand          : %s\n", c.brand);
    printf("Model          : %s\n", c.model);
    printf("Fuel Type      : %s\n", c.fuel);
    printf("Manufactured   : %d\n", c.year);
    printf("Price          : %.2f\n", c.price);
    printf("Car Age        : %d years\n", age);
    printf("=================================\n");

    return 0;
}