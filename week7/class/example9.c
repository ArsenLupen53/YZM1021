//grade information of a student
#include <stdio.h>

int main()
{
    int a;
    printf("enter which grade are you in (1/2/3/4): ");
    scanf("%d",&a);

    switch (a){
        case 1: printf("student is in 1st grade\n");
            break;
        case 2: printf("student is in 2nd grade\n");
            break;
        case 3: printf("student is in 3rd grade\n");
            break;
        case 4: printf("student is in 4th grade\n");
            break;
    }

    return 0;
}