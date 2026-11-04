// Analysis of exam results
#include <stdio.h>

int main(void)
{
    int passes = 0, fails = 0, grade, stu=1;

    while (stu<=5)
    {
        printf("Enter result (1-pass, 0-fail): ");
        scanf("%d", &grade);
        stu++;
        if(grade==1)
            passes++;
        else
            fails++;
    }
    printf("Number of passes %d\n", passes);
    printf("Number of fails %d\n", fails);

    if (passes>=4)
        printf("Nice amount of students passed\n");
    else
        printf("Students need to study more\n");

    return 0;
}