/*
Ask 5 questions from 1+1 to 5+5. Use a for loop to choose the question.
Inside it, use do-while to allow at most 2 attempts.
1st attempt success earns 2 points
2nd attempt success earns 1 points
Both questions answers are wrong show the answer and move on. 
*/


#include <stdio.h>

int main()
{
    int answer, try, point=0;
    for(int i = 1; i <= 5; i++)
    {
        try = 0;

        do {
            printf("%d+%d = ",i,i);
            scanf("%d",&answer);
            try++;
        } while (try < 2 && answer != i + i);

        if (answer == i + i)
        {
            point+= 3 - try;
            printf("OK!\n");
        }
        else
            printf("Answer is %d\n", i+i);
    }
    printf("Point: %d",point);
    return 0;
}