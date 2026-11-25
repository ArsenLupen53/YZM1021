// Ten random number generation between 0 and 9
#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h> //time()

int main()
{
    int i;
    srand(time(0));
    for (i=0;i<10;i++)
        printf("%4d",(rand()%10)); // %10 mantığını kes
    return 0;
}