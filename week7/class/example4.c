// sum numbers that are entered from keyboard with exit option
// use do while

#include <stdio.h>

int main()
{
    int num, sum = 0;
    char answer;

    do {
        printf("enter a number: ");
        scanf("%d",&num);

        sum+= num;
        printf("Do you want to exit? (Y/N): ");
        scanf(" %c",&answer);
    } while (answer != 'Y');
    printf("total is %d",sum);

    return 0;
}