#include<stdio.h>

//function to calculate total marks 
int calculateTotal(int marks[], int subjects)
{
    
    int total = 0;
    for(int i= 0; i< subjects; i++)
    {
        total = total+marks[i];
    }
    return total; 
}
// function to calculate percentage
float calculatePercentage(int total, int subjects)
{
    return(float)total/subjects;
}
//function to find highest marks 
int findHighest(int marks[], int subjects)
{
    int highest = marks[0];
    for(int i=1; i<subjects; i++)
    {
        if(marks[i]>highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}
//function to display result
void displayResult(int total, float percentage, int highest)
{
    printf("\n---------STUDENT RESULT-----------\n");
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if(percentage >= 75)
    {
        printf("Grade: A\n");
    }
    else if(percentage >= 60)
    {
        printf("Grade: B\n");
    }
    else if(percentage >= 50)
    {
        printf("Grade: C\n");
    }
    else if(percentage >= 35)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("RESULT: FAIL\n");
    }
}

int main()
{
    int marks[5];
    int total;
    int highest;
    float percentage;

    printf("Enter marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    total = calculateTotal(marks, 5);
    percentage = calculatePercentage(total, 5);
    highest = findHighest(marks, 5);
    displayResult(total, percentage, highest);

    return 0;
}





