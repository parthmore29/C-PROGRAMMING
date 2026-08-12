#include <stdio.h>

int main()
{
    int age =17;
    float marks =82.5;
    char grade ='A';

    int *pAge =&age;
    float *pMarks =&marks;
    char *pGrade =&grade;

    printf("=========================================\n");
    printf("          MEMORY ADDRESS MAP\n");
    printf("=========================================\n\n");
    
// Displaying the memory addresses and values of the variables using pointers
    printf("Variable : age\n");
    printf("Value    : %d\n", *pAge);
    printf("Address  : %p\n", (void *)pAge);
    printf("Pointer  : int *\n\n");

    printf("Variable : marks\n");
    printf("Value    : %.2f\n", *pMarks);
    printf("Address  : %p\n", (void *)pMarks);
    printf("Pointer  : float *\n\n");

    printf("Variable : grade\n");
    printf("Value    : %c\n", *pGrade);
    printf("Address  : %p\n", (void *)pGrade);
    printf("Pointer  : char *\n\n");

    printf("=========================================\n");
    printf("All pointers stored the memory addresses.\n");
    printf("==========================================\n");

    return 0;
}