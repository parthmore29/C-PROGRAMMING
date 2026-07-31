#include <stdio.h>

struct Location
{
    char city[30];
    char country[30];
};

struct Date
{
    int day;
    int month;
    int year;
};

struct Case
{
    int caseID;
    char title[50];
    char entity[40];
    struct Location location;
    struct Date date;
    char status[20];
};

int main()
{
    struct Case c;

    printf("============================================\n");
    printf("       THE OCCULT ARCHIVE - CASE FILE       \n");
    printf("============================================\n");
    printf("We receive paranormal reports from around\n");
    printf("the world and archive them for investigation.\n");
    printf("============================================\n\n");

    printf("Enter Case ID: ");
    scanf("%d", &c.caseID);

    printf("Enter Case Title: ");
    scanf(" %[^\n]", c.title);

    printf("Enter Entity / Phenomenon: ");
    scanf(" %[^\n]", c.entity);

    printf("Enter City: ");
    scanf(" %[^\n]", c.location.city);

    printf("Enter Country: ");
    scanf(" %[^\n]", c.location.country);

    printf("Enter Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &c.date.day,
          &c.date.month,
          &c.date.year);

    printf("Enter Case Status (Open/Closed/Unsolved): ");
    scanf(" %[^\n]", c.status);

    printf("\n\n");
    printf("============================================\n");
    printf("          CLASSIFIED OCCULT CASE            \n");
    printf("============================================\n");

    printf("CASE ID       : %d\n", c.caseID);
    printf("CASE TITLE    : %s\n", c.title);
    printf("ENTITY        : %s\n", c.entity);

    printf("--------------------------------------------\n");
    printf("LOCATION      : %s, %s\n",
           c.location.city,
           c.location.country);

    printf("DATE REPORTED : %02d / %02d / %04d\n",
           c.date.day,
           c.date.month,
           c.date.year);

    printf("STATUS        : %s\n", c.status);

    printf("============================================\n");
    printf("     CASE ARCHIVED FOR INVESTIGATION ...stay aware :)     \n");
    printf("============================================\n");

    return 0;
}