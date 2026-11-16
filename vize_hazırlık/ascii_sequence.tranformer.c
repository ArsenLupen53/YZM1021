/*
Write a program that acts as an ASCII Sequence Transformer
The program must read an integer N from the console. 
For uppercase: print exactly N character in alphabetical order
If the valid character is a lower case letter print it precedending letters
if it is a digit find ascii and calculate the sum of digits of ascii
print newline
*/


#include <stdio.h>

int main()
{
    int n;
    char ch;
    printf("N: ");
    scanf("%d",&n);

    for (int i = 0; i<n ;i++)
    {
        printf("Ch: ");
        scanf(" %c",&ch);
        if (ch>=65 && ch<=90) // kanka 'A' yap
        {
            for (int j = 0; j < n; j++)
            {
                if (ch==91)
                {
                    ch=65;
                }
                printf("%c",ch);
                ch++;
            }
        }
        else if(ch>=97 && ch<=122)
        {
            while (ch != 96)
            {
                printf("%c",ch);
                ch--;
            }
        }
        else if(ch>=48 && ch<=57)
        {
            int sum = 0;
            int number = ch;
            do
            {
                sum+= number % 10;
                number /= 10;
            } while(number > 0);
            printf("%d",sum);
        }
        else
        {
            printf("Invalid value");
        }
        printf("\n");
    }

}