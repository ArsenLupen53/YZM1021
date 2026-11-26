/* Question 3: A teacher adds 5 bouns points to a score. But the score cannot exceed 100

*/

#include <stdio.h>
int read_score(void)
{
    int score;
    printf("Score: ");
    scanf("%d",&score);
    return score;
}

int add_bonus(int score)
{
    score += 5;
    if (score > 100)
        score = 100;
    return score;
}


void show_score(int score)
{
    printf("New: %d\n", score);
}

int main(void)
{
    int original = read_score();
    int updated = add_bonus(original);
    printf("Old: %d\n",original);
    show_score(updated);
    return 0;
}