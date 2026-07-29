#include<stdio.h>
#include<string.h>

int main()
{
    char answers[5][20] = {"New Delhi","Mars","pacific","leonardo da vinci","jupiter"};
    char answer[20];
    int score = 0;

    printf("\n+--------------------------------------------------+");
    printf("\n    GENRAL KNOWLEDGE QUIZ    ");
    printf("\n+--------------------------------------------------+");

    printf("\nQ1 what is the capital of India ?\n>");
    scanf(" %[^\n]", answer);
    if(strcmp(answer, answers[0])==0)
    score++;

  printf("\nQ2 which planet is known as red planet?\n>");
    scanf(" %[^\n]", answer);
    if(strcmp(answer, answers[1])==0)
    score++;

  printf("\nQ3 which is the largest ocean in the world?\n>");
    scanf(" %[^\n]", answer);
    if(strcmp(answer, answers[2])==0)
    score++;

  printf("\nQ4 who painted the great painting MONA LISA ?\n>");
    scanf(" %[^\n]", answer);
    if(strcmp(answer, answers[3])==0)
    score++;

      printf("\nQ5 which is the largest planet in our solar system ?\n>");
    scanf(" %[^\n]", answer);
    if(strcmp(answer, answers[4])==0)
    score++;

    printf("\n+-------------------------------------------\n");
    printf("\n            QUIZ RESULT                       ");
    printf("\n+-------------------------------------------\n");

    printf("\n your score: %d/5",score);
    if(score == 5)
    printf("\nEXCELENT! PERFECT SCORE! ");
    else if(score >= 3)
    printf("\n GREAT JOB! keep it up! ");
    else
    printf("\nGOOD ATTEMPT! TRY AGAIN :)");
    printf("\n\n");
    return 0;
}

