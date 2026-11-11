//basic calculator
#include <stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("(S)um, substra(C)tion, (M)ultiplication, (D)ivision: ");
    scanf(" %c",&ch);
    printf("\n");

    while (ch!='S' && ch!='C' && ch!= 'M' && ch!= 'D')
    {
        printf("Enter SCDM: ");
        scanf(" %c",&ch);
    }

    printf("Enter numbers with a space between them: ");
    scanf("%d %d",&a,&b);

    switch (ch) {
        case 'S':
            printf("%d",a+b);
            break;
        case 'C':
            printf("%d",a-b);
            break;
        case 'M':
            printf("%d",a*b);
            break;
        case 'D':
            printf("%f",(float) a/b);
            break;
        default:
            printf("Wrong entry");
    }

    return 0;
}