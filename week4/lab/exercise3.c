/*
read value form user
int 
char
float

print them
print float with width of 3 and 2 decimal numbers
*/

#include <stdio.h>

int main(void)
{
    int student_id;
    char group;
    float measure;

    printf("Enter your student id: ");
    scanf("%d", &student_id);
    printf("Enter your group: ");
    scanf(" %c", &group); // charın inputuna dikkat
    printf("Enter a float number: ");
    scanf("%f", &measure);

    printf("id: %d\n",student_id);
    printf("group: %c\n", group);
    printf("number: %3.2f\n", measure);

    return 0;
}