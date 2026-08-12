// A tiny text-based "exploration" game where the program gives you variables/locations and you navigate through them using pointer operations.

#include <stdio.h>

void inspectMemory(int *ptr, int size, int position)
{
    printf("\n--- Current Memory Location ---\n");
    printf("Position : %d\n", position + 1);
    printf("Value    : %d\n", *ptr);
    printf("Address  : %p\n", (void *)ptr);
}

void showMemoryMap(int *memory, int size, int position)
{
    int i;

    printf("\n--- MEMORY MAP ---\n\n");

    for(i = 0; i < size; i++)
    {
        if(i == position)
            printf(" -> [%d]  Value: %d  Address: %p  <-- YOU ARE HERE\n",
                   i + 1, *(memory + i), (void *)(memory + i));
        else
            printf("    [%d]  Value: %d  Address: %p\n",
                   i + 1, *(memory + i), (void *)(memory + i));
    }
}

int searchMemory(int *memory, int size, int target)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(*(memory + i) == target)
            return i;
    }

    return -1;
}

int main()
{
    int memory[8] = {12, 47, 23, 81, 35, 64, 19, 72};
    int *ptr = memory;

    int position = 0;
    int choice;
    int target;
    int result;

    printf("============================================\n");
    printf("          MEMORY ADVENTURE\n");
    printf("============================================\n");

    printf("\nYou wake up inside a strange memory space...\n");
    printf("Eight memory locations surround you.\n");
    printf("Your only way forward is through the pointer.\n");

    do
    {
        printf("\n--------------------------------------------\n");
        printf("Current Location : Memory Block %d\n", position + 1);
        printf("--------------------------------------------\n");

        printf("\n1. Inspect current memory\n");
        printf("2. Move pointer forward ->\n");
        printf("3. Move pointer backward <-\n");
        printf("4. Read the value\n");
        printf("5. Search for a value\n");
        printf("6. View memory map\n");
        printf("7. Show pointer address\n");
        printf("8. Exit the adventure\n");

        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                inspectMemory(ptr, 8, position);
                break;

            case 2:
                if(position < 7)
                {
                    position++;
                    ptr++;
                    printf("\nPointer moved forward.\n");
                    printf("You entered Memory Block %d.\n", position + 1);
                }
                else
                {
                    printf("\nYou reached the end of the memory!\n");
                }
                break;

            case 3:
                if(position > 0)
                {
                    position--;
                    ptr--;
                    printf("\nPointer moved backward.\n");
                    printf("You returned to Memory Block %d.\n", position + 1);
                }
                else
                {
                    printf("\nThere is no memory block behind you!\n");
                }
                break;

            case 4:
                printf("\nValue stored here: %d\n", *ptr);
                break;

            case 5:
                printf("\nEnter a value to search: ");
                scanf("%d", &target);

                result = searchMemory(memory, 8, target);

                if(result != -1)
                {
                    printf("\nValue found!\n");
                    printf("Memory Block : %d\n", result + 1);
                    printf("Address      : %p\n",
                           (void *)(memory + result));
                }
                else
                {
                    printf("\nThat value does not exist in this memory.\n");
                }
                break;

            case 6:
                showMemoryMap(memory, 8, position);
                break;

            case 7:
                printf("\nCurrent pointer address: %p\n", (void *)ptr);
                printf("Current value: %d\n", *ptr);
                break;

            case 8:
                printf("\n============================================\n");
                printf("       You escaped the memory space.\n");
                printf("============================================\n");
                printf("The pointer adventure ends here. \n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }

    } 
    while(choice != 8);

    return 0;
}
