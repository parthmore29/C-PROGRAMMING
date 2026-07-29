#include <stdio.h>
#include <string.h>

int main()
{
    char tasks[20][100];
    char command;
    int n, taskNumber;

    while(1)
    {
        printf("\n+--------------------------------------+");
        printf("\n|           YOUR TO-DO LIST            |");
        printf("\n+------------------------------------+\n");

        printf("\nHow many tasks do you want to add? ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            printf("Task %d: ", i + 1);
            scanf(" %[^\n]", tasks[i]);
        }

        while(1)
        {
            printf("\n\n----------- YOUR TASKS -----------\n");

            for(int i = 0; i < n; i++)
                printf("%d. %s\n", i + 1, tasks[i]);

            printf("\nD - Mark a task as DONE");
            printf("\n0 - Start a new list");
            printf("\n9 - Exit");

            printf("\n\nEnter command: ");
            scanf(" %c", &command);

            if(command == 'D' || command == 'd')
            {
                printf("Enter task number: ");
                scanf("%d", &taskNumber);

                if(taskNumber >= 1 && taskNumber <= n)
                {
                    char temp[100];

                    strcpy(temp, "DONE - ");
                    strcat(temp, tasks[taskNumber - 1]);
                    strcpy(tasks[taskNumber - 1], temp);

                    printf("\nTask marked as DONE! ✓\n");
                }
                else
                {
                    printf("\nInvalid task number!\n");
                }
            }
            else if(command == '0')
            {
                printf("\nStarting a new task list...\n");
                break;
            }
            else if(command == '9')
            {
                printf("\nThank you for using To-Do List! ✨\n");
                return 0;
            }
            else
            {
                printf("\nInvalid command!\n");
            }
        }
    }

    return 0;
}