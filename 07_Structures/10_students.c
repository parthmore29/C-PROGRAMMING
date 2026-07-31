//array of structures concept 
#include <stdio.h>

struct Student
{
    char name[30];
    int rollNo;
    float maths, physics, chemistry, total, percentage;
};

int main()
{
    struct Student s[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Maths: ");
        scanf("%f", &s[i].maths);

        printf("Physics: ");
        scanf("%f", &s[i].physics);

        printf("Chemistry: ");
        scanf("%f", &s[i].chemistry);

        s[i].total = s[i].maths + s[i].physics + s[i].chemistry;
        s[i].percentage = s[i].total / 3;
    }

    printf("\n==================== STUDENT MARKSHEETS ====================\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nStudent %d | Roll No: %d\n", i + 1, s[i].rollNo);
        printf("Name       : %s\n", s[i].name);
        printf("Maths      : %.2f\n", s[i].maths);
        printf("Physics    : %.2f\n", s[i].physics);
        printf("Chemistry  : %.2f\n", s[i].chemistry);
        printf("Total      : %.2f / 300\n", s[i].total);
        printf("Percentage : %.2f%%\n", s[i].percentage);
        printf("-------------------------------------------------------------\n");
    }

    return 0;
}



