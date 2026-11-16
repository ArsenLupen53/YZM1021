#include <stdio.h>

int main()
{
    char f, s;
    int n, i = 0, z = 1;
    // printf(": "); -> SİLİNDİ
    scanf(" %c %c%d", &f, &s, &n);

    while (i < n)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int a = 0; a < n - i; a++)
        {
            if ((n - 1 - i) % 2 == 0) // DÜZELTİLDİ (tek/çift n uyumu)
                printf("%c", f);
            else
                printf("%c", s);
            printf(" ");
        }
        printf("\n");
        i++;
    }

    if (z < n) // n=1 durumu için koruma
    {
        do // DÜZELTİLDİ (while -> do-while yapıldı)
        {
            for (int a = 0; a < n - z - 1; a++)
            {
                printf(" ");
            }
            for (int j = 0; j <= z; j++)
            {
                if (z % 2 == 0)
                    printf("%c", f);
                else
                    printf("%c", s);
                printf(" ");
            }
            printf("\n");
            z++;
        } while (z < n);
    }

    return 0;
}