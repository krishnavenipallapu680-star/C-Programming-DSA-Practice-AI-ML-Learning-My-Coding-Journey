#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("Welcome to C Quiz Game!\n\n");

    printf("1. Who developed C language?\n");
    printf("1) Dennis Ritchie\n2) James Gosling\n3) Bjarne Stroustrup\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\n2. Which symbol is used for comments in C?\n");
    printf("1) //\n2) ##\n3) **\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\n3. Which function is used to print output in C?\n");
    printf("1) scanf()\n2) printf()\n3) input()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    printf("\nYour Score = %d/3", score);

    if(score == 3)
    {
        printf("\nExcellent!");
    }
    else if(score == 2)
    {
        printf("\nGood Job!");
    }
    else
    {
        printf("\nKeep Practicing!");
    }

    return 0;
}
