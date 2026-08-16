// A C fun mini project-like
// program to create a mini diary using the concept of file handling


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FILE_NAME "diary.txt"

void writeEntry()
{
    FILE *fp;
    char entry[500];

    fp = fopen(FILE_NAME, "w");

    if(fp == NULL)
    {
        printf("\nUnable to open diary.\n");
        return;
    }

    printf("\n============================================\n");
    printf("              NEW DIARY ENTRY\n");
    printf("============================================\n");

    printf("\nWrite your entry:\n> ");
    getchar();
    fgets(entry, sizeof(entry), stdin);

    fprintf(fp, "--------------------------------------------\n");
    fprintf(fp, "%s", entry);
    fprintf(fp, "--------------------------------------------\n");

    fclose(fp);

    printf("\nEntry saved successfully. 🌿\n");
}

void addEntry()
{
    FILE *fp;
    char entry[500];

    fp = fopen(FILE_NAME, "a");

    if(fp == NULL)
    {
        printf("\nUnable to open diary.\n");
        return;
    }

    printf("\n============================================\n");
    printf("             ADD DIARY ENTRY\n");
    printf("============================================\n");

    printf("\nWrite your entry:\n> ");
    getchar();
    fgets(entry, sizeof(entry), stdin);

    fprintf(fp, "\n--------------------------------------------\n");
    fprintf(fp, "%s", entry);
    fprintf(fp, "--------------------------------------------\n");

    fclose(fp);

    printf("\nEntry added to your diary. \n");
}

void readDiary()
{
    FILE *fp;
    char ch;

    fp = fopen(FILE_NAME, "r");

    if(fp == NULL)
    {
        printf("\nYour diary is empty.\n");
        return;
    }

    printf("\n============================================\n");
    printf("                 MY DIARY\n");
    printf("============================================\n\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    printf("\n============================================\n");
}

void searchDiary()
{
    FILE *fp;
    char word[50];
    char line[500];
    int found = 0;

    fp = fopen(FILE_NAME, "r");

    if(fp == NULL)
    {
        printf("\nYour diary is empty.\n");
        return;
    }

    printf("\nEnter a word to search for: ");
    scanf("%49s", word);

    printf("\n--- Search Results ---\n");

    while(fgets(line, sizeof(line), fp) != NULL)
    {
        if(strstr(line, word) != NULL)
        {
            printf("%s", line);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No matching entry found.\n");
    }

    fclose(fp);
}

void clearDiary()
{
    FILE *fp;
    char choice;

    printf("\nAre you sure you want to erase the diary? (y/n): ");
    scanf(" %c", &choice);

    if(choice == 'y' || choice == 'Y')
    {
        fp = fopen(FILE_NAME, "w");

        if(fp == NULL)
        {
            printf("\nUnable to clear diary.\n");
            return;
        }

        fclose(fp);

        printf("\nDiary cleared successfully.\n");
    }
    else
    {
        printf("\nDiary was not changed.\n");
    }
}

int main()
{
    int choice;

    printf("============================================\n");
    printf("             THE MINI DIARY \n");
    printf("============================================\n");
    printf("        A simple C File Handling project\n");
    printf("============================================\n");

    do
    {
        printf("\n\n--------------- MENU ----------------\n");
        printf("1. Write new diary\n");
        printf("2. Add another entry\n");
        printf("3. Read diary\n");
        printf("4. Search diary\n");
        printf("5. Clear diary\n");
        printf("6. Exit\n");
        printf("-------------------------------------\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                writeEntry();
                break;

            case 2:
                addEntry();
                break;

            case 3:
                readDiary();
                break;

            case 4:
                searchDiary();
                break;

            case 5:
                clearDiary();
                break;

            case 6:
                printf("\nDiary closed. See you next time. \n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}