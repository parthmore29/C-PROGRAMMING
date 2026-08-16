#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100];
    char destinationName[100];
    char ch;

    printf("=================================\n");
    printf("          FILE COPIER\n");
    printf("=================================\n\n");

    printf("Enter source file name: ");
    scanf("%99s", sourceName);

    printf("Enter destination file name: ");
    scanf("%99s", destinationName);

    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("\nUnable to open source file.\n");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if(destination == NULL)
    {
        printf("\nUnable to create destination file.\n");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("\nFile copied successfully!\n");
    printf("%s -> %s\n", sourceName, destinationName);

    return 0;
}