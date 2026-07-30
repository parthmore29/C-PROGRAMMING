#include <stdio.h>

struct Currency
{
    char name[30];
    char code[10];
    float amount;
    float rate;
    float converted;
};

int main()
{
    struct Currency c;

    printf("Enter currency name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter currency code: ");
    scanf("%s", c.code);

    printf("Enter amount: ");
    scanf("%f", &c.amount);

    printf("Enter conversion rate to INR: ");
    scanf("%f", &c.rate);

    c.converted = c.amount * c.rate;

    printf("\n========== CURRENCY CONVERTER ==========\n");
    printf("Currency        : %s (%s)\n", c.name, c.code);
    printf("Amount          : %.2f %s\n", c.amount, c.code);
    printf("Conversion Rate : %.2f INR\n", c.rate);
    printf("----------------------------------------\n");
    printf("Value in INR    : %.2f INR\n", c.converted);
    printf("========================================\n");

    return 0;
}