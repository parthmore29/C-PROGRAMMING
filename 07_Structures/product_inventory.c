#include <stdio.h>

struct Product
{
    int id;
    char name[30];
    float price;
    int quantity;
    float stockValue;
};

int main()
{
    struct Product p[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p[i].id);

        printf("Product Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Price(in rupees): ");
        scanf("%f", &p[i].price);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        p[i].stockValue = p[i].price * p[i].quantity;
    }

    printf("\n========== PRODUCT INVENTORY ==========\n");
    printf("summary of all products in the inventory\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("ID          : %d\n", p[i].id);
        printf("Name        : %s\n", p[i].name);
        printf("Price(in rupees)       : %.2f\n", p[i].price);
        printf("Quantity    : %d\n", p[i].quantity);
        printf("Stock Value : %.2f\n", p[i].stockValue);
        printf("--------------------------------------\n");
        printf("       happy selling and buying products       \n");
    }

    return 0;
}