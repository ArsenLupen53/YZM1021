// evaluate student score (before learing else if)

#include <stdio.h>

int main()
{
    int score;
    printf("Enter student score: ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("Score is super!\n");
        return 0;
    }
    if (score >= 70)
    {
        printf("Score is great\n");
        return 0;
    }
    if (score >= 50)
    {
        printf("Score is avarage\n");
        return 0;
    }

    return 0;
}