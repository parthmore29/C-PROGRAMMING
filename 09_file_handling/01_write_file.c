#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;
    float marks;

    printf("======== STUDENT FILE CREATOR ========\n");

    printf("\nEnter student name: ");
    fgets(name, sizeof(name),stdin);

    printf("Enter age : ");
    scanf("%d, &age");

    printf("Enter marks ");
    scanf("%f", &marks);


  fp = fopen("student.txt", "w");
  if(fp == NULL)
 {
    printf("\nUnable to create the file. \n");
    return 0;
 }

 fprintf(fp, "Stusent Record\n");
 fprintf(fp, "--------------\n");
 fprintf(fp, "Name : %s",name);
 fprintf(fp, "Age  : %d\n", age);
 fprintf(fp, "Marks : %.2f\n",marks);

 fclose(fp);

 printf("\nStudent information successfully saved! \n");
 printf("File created: student.txt\n");

 return 0;
}



