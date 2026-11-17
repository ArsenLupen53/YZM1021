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
    int length, n = 0;
    
    printf("Length: ");
    scanf("%d", &length);



    // traverse, go through row
    while (n < length)
    {
        for (int i = 0; i < length - n - 1;i++)
        {
            printf(" ");
        }
        for (int j = 0; j < n + 1; j++)
        {
            printf("*");
        }
        printf("\n");
        n++;
    }

    return 0;
}