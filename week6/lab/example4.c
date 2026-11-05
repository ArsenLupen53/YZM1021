/*Question

get a value from user, length of a triangle
ex: 4
   #
  ##
 ###
####
*/


#include <stdio.h>
int main(void)
{
    int length, row = 1, column = 1;
    
    printf("Length: ");
    scanf("%d", &length);



    // traverse, go through row
    while (row <= length)
    {
        column= 1;
        //columns
        while(column <= length)
        {
            if (column + row > length)
                printf("#");
            else
                printf(" ");
            column++;
        }
        printf("\n");
        row++;
    }

    return 0;
}