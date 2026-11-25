#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0;

    int roll;
    int face;

    srand(time(0));

    for(roll=1;roll<=6000;roll++)
    {
        face = 1 + rand()%6;

        switch(face)
        {
            case 1:
                freq1++;
                break;
            case 2:
                freq2++;
                break;
            case 3:
                freq3++;
                break;
            case 4:
                freq4++;
                break;
            case 5:
                freq5++;
                break;
            case 6:
                freq6++;
                break;
        }
    }

    printf(" \n Face Frequency\n");
    printf(" 1%13d\n",freq1);
    printf(" 2%13d\n",freq2);
    printf(" 3%13d\n",freq3);
    printf(" 4%13d\n",freq4);
    printf(" 5%13d\n",freq5);
    printf(" 6%13d\n",freq6);
}