#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("student.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open student.txt\n");
        return 1;
    }

    printf("=================================\n");
    printf("        STUDENT FILE READER\n");
    printf("=================================\n\n");

    printf("File contents:\n\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    printf("\n\n=================================\n");
    printf("       File reading complete.\n");
    printf("=================================\n");

    return 0;
}