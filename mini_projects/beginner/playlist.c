#include <stdio.h>
#include <string.h>

struct SongMemory
{
    char mood[30];
    char song[100];
};

int main()
{
    struct SongMemory memories[6];

    char moods[6][30] = {
        "Home",
        "All-Time Favourite",
        "Sadness",
        "Hope",
        "Spirituality",
        "Nostalgia"
    };

    printf("\n");
    printf("============================================\n");
    printf("   ~~~~~  YOUR LITTLE SONG JOURNAL ~~~~ \n");
    printf("============================================\n");
    printf("\n");
    printf("Some songs... are more than songs,\n");
    printf("They become places, memories and feelings....\n");
    printf("\n");

    for(int i = 0; i < 6; i++)
    {
        strcpy(memories[i].mood, moods[i]);

        printf("--------------------------------------------\n");

        if(i == 0)
            printf("Which song will you remember when you think of HOME?\n");
        else if(i == 1)
            printf("Which song is your ALL-TIME FAVOURITE?\n");
        else if(i == 2)
            printf("Which song belongs to your moments of SADNESS?\n");
        else if(i == 3)
            printf("Which song reminds you of HOPE?\n");
        else if(i == 4)
            printf("Which song connects with your SPIRITUALITY?\n");
        else
            printf("Which song carries your NOSTALGIA?\n");

        printf("\nSong: ");
        fgets(memories[i].song, sizeof(memories[i].song), stdin);

        memories[i].song[strcspn(memories[i].song, "\n")] = '\0';

        printf("\nSaved. %s -> %s\n\n",
               memories[i].mood, memories[i].song);
    }

    printf("\n\n============================================\n");
    printf("            JOURNAL OF YOUR SONGS\n");
    printf("============================================\n\n");

    for(int i = 0; i < 6; i++)
    {
        printf("%-20s : %s\n",
               memories[i].mood,
               memories[i].song);
    }

    printf("\n===============================================================\n");
    printf("These songs are little pieces of your story:)\n");
    printf("Keep them close. Some memories deserve a soundtrack.<3\n");
    printf("==================================================================\n");

    return 0;
}

