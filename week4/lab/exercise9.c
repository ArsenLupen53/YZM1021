/*
Course: midterm, final exam each an integer from 0 to 100
Read both scores and an attendance from 0 to 10
Define const double MID_WEIGHT = 0.4
#define MIN_ATTENDANCE 8

Read three integer -> midterm, final, attendance
Calculate Score and print
Score >= 50 Pass
Attendance >= MIN_ATTENDANCE Pass
if not so ----> Fail!!!
Score >= 90 Bonus
*/

#include <stdio.h>
#define MIN_ATTENDANCE 8

int main()
{
    const double MID_WEIGHT = 0.4;
    int midterm, final, attendance;
    double score;

    printf("Enter your M F A: ");
    scanf("%d %d %d",&midterm, &final, &attendance);

    score = midterm * MID_WEIGHT + (final * (1- MID_WEIGHT));
    printf("Score: %.1f\n", score);

    if (score >= 90 && attendance >= MIN_ATTENDANCE)
    {
        printf("Bonus");
    }
    else if (score >=50 && attendance >= MIN_ATTENDANCE)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}