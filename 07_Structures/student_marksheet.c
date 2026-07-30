#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float maths;
    float physics;
    float chemistry;
    float total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Maths marks: ");
    scanf("%f", &s.maths);

    printf("Enter Physics marks: ");
    scanf("%f", &s.physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &s.chemistry);

    s.total = s.maths + s.physics + s.chemistry;
    s.percentage = s.total / 3;

    printf("\n========== STUDENT MARKSHEET ==========\n");
    printf("Name       : %s\n", s.name);
    printf("Roll No    : %d\n", s.rollNo);
    printf("---------------------------------------\n");
    printf("Maths      : %.2f\n", s.maths);
    printf("Physics    : %.2f\n", s.physics);
    printf("Chemistry  : %.2f\n", s.chemistry);
    printf("---------------------------------------\n");
    printf("Total      : %.2f / 300\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("=======================================\n");

    return 0;
}