#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    float num1, num2;

    if (argc != 4)
    {
        printf("Usage: calculator number operator number\n");
        printf("Example: calculator 10 + 5\n");
        return 1;
    }

    num1 = atof(argv[1]);
    num2 = atof(argv[3]);

    if (strcmp(argv[2], "+") == 0)
        printf("Result = %.2f\n", num1 + num2);

    else if (strcmp(argv[2], "-") == 0)
        printf("Result = %.2f\n", num1 - num2);

    else if (strcmp(argv[2], "*") == 0)
        printf("Result = %.2f\n", num1 * num2);

    else if (strcmp(argv[2], "/") == 0)
    {
        if (num2 == 0)
            printf("Error: Cannot divide by zero.\n");
        else
            printf("Result = %.2f\n", num1 / num2);
    }

    else
        printf("Invalid operator.\n");

    return 0;
}
