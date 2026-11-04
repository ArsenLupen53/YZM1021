// Letter grade of a student
#include <stdio.h>

int main(void)
{
    int mid1, mid2, final;
    float avg;
    char letter;

    printf("Enter Midterm Result 1: ");
    scanf("%d", &mid1);
    printf("Enter Midterm Result 2: ");
    scanf("%d", &mid2);
    printf("Enter Final Result: ");
    scanf("%d", &final);

    avg = mid1*0.2 + mid2*0.3 + final*0.5;
    printf("Average of the student is %0.2f\n\n", avg);

    if (avg>=90)
        letter = 'A';
    else if (avg>=70)
        letter = 'B';
    else
        letter = 'F';

    printf("Letter grade is %c", letter);

    return 0;
}