/* Question 6:
0 to 99 Random int
seed ran once with qurrent time
Read guesses

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess,answer,count = 0;
    srand(time(0));
    answer = rand() % 100;
    printf("Enter your guess: ");
    scanf("%d",&guess);
    while (1)
    {
        if (guess < answer)
        {
            printf("Increase your guess: ");
            scanf("%d",&guess);
            count++;
        }
        else if (guess > answer)
        {
            printf("Decrease your guess: ");
            scanf("%d",&guess);
            count++;
        }
        else
        {
            printf("OK\n");
            count++;
            printf("Count: %d\n",count);
            break;
        }
    }

    return 0;
}