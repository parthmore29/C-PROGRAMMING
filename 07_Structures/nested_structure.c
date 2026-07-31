// concept of nested structures 

#include<stdio.h>

struct Address
{
    char city[30];
    char state[30];
    char pin;
};
struct student
{
    char name[30];
    int rollno;
    struct Address address;
};

int main()
{
    struct student s;

    printf("ENTER STUDENT NAME: ");
    scanf(" %[^\n]", s.name);

     printf("ENTER ROLL NUMBER: ");
    scanf("%d", &s.rollno);
    
     printf("ENTER CITY: ");
    scanf(" %[^\n]", s.address.city);
    
     printf("ENTER STATE: ");
    scanf(" %[^\n]", s.address.state);
    
    printf("ENTER PIN: ");
    scanf(" %d", &s.address.pin);
    
      printf("\n========== STUDENT DETAILS ==========\n");
    printf("Name       : %s\n", s.name);
    printf("Roll No    : %d\n", s.rollno);
    printf("-------------------------------------\n");
    printf("City       : %s\n", s.address.city);
    printf("State      : %s\n", s.address.state);
    printf("PIN Code   : %d\n", s.address.pin);
    printf("=====================================\n");

    return 0;
}
