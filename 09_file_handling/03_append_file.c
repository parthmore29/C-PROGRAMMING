#include <stdio.h>

int main()
{
    FILE *fp;
    char entry[200];

    printf("=================================\n");
    printf("       APPEND TO STUDENT FILE\n");
    printf("=================================\n\n");

    fp = fopen("student.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open student.txt\n");
        return 1;
    }

    printf("Enter additional information: ");
    getchar();
    fgets(entry, sizeof(entry), stdin);

    fprintf(fp, "\nAdditional Information:\n");
    fprintf(fp, "%s", entry);

    fclose(fp);

    printf("\nInformation successfully added to student.txt!\n");

    return 0;
}