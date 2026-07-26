#include<stdio.h>

void getUserData(char name[], int *mood, float*sleep, float *study, float *coding, float *freetime)
{
    printf("ENTER YOUR NAME: \n");
    scanf("%s", name);

    printf("MOOD TODAY (1-10): \n");
    scanf("%d", mood);

    printf("SLEEP HOURS: \n");
    scanf("%f", sleep);

    printf("STUDY HOURS: \n");
    scanf("%f", study);

    printf("CODING HOURS: \n");
    scanf("%f", coding);

    printf("FREE TIME HOURS: \n");
    scanf("%f", freetime);
}
float calculateProductivity(float study, float coding, int mood)
{
    return (study * 8) + (coding * 5) + (mood * 5);
}

float calculateBalance(float sleep, float study, float freeTime)
{
    return sleep + study + freeTime;
}

void analyzeMood(int mood)
{
    if(mood >= 8)
        printf("Mood        : Positive ✨\n");
    else if(mood >= 5)
        printf("Mood        : Balanced 🌱\n");
    else
        printf("Mood        : Needs Care 💙\n");
}

void generateVerdict(float productivity, float balance)
{
    if(productivity >= 100 && balance >= 10)
        printf("Today's Verdict: Amazing balance! You had a productive day. 🔥\n");
    else if(productivity >= 70)
        printf("Today's Verdict: Good work! You're making progress. 💚\n");
    else
        printf("Today's Verdict: Take it easy and recharge. Tomorrow is another day. 🌙\n");
}

void displayDashboard(char name[], int mood, float sleep, float study,
                     float coding, float freeTime, float productivity, float balance)
{
    printf("\n\n");
    printf("============================================\n");
    printf("              ✦ DAILY PULSE ✦              \n");
    printf("============================================\n");

    printf("Name        : %s\n", name);
    printf("Sleep       : %.1f hours\n", sleep);
    printf("Study       : %.1f hours\n", study);
    printf("Coding      : %.1f hours\n", coding);
    printf("Free Time   : %.1f hours\n", freeTime);
    printf("Mood        : %d/10\n", mood);

    printf("--------------------------------------------\n");

    printf("Productivity: %.2f\n", productivity);
    printf("Balance     : %.1f hours\n", balance);

    analyzeMood(mood);

    printf("--------------------------------------------\n");

    generateVerdict(productivity, balance);

    printf("============================================\n");
    printf("           SEE YOU TOMORROW ✦              \n");
    printf("============================================\n");
}

int main()
{
    char name[30];
    int mood;
    float sleep, study, coding, freeTime;
    float productivity, balance;

    getUserData(name, &mood, &sleep, &study, &coding, &freeTime);

    productivity = calculateProductivity(study, coding, mood);

    balance = calculateBalance(sleep, study, freeTime);

    displayDashboard(name, mood, sleep, study, coding,
                     freeTime, productivity, balance);

    return 0;
}