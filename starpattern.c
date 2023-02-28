// Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reverse
/* if n = 4
*
**
***
****  -> triangular star pattern

****
***
**
*     -> reverse triangular star pattern
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter 0 for triangular star pattern and 1 for reverse triangular star pattern\n");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    }

    case 1:
    {
        for (int i = 4; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    }

    default:
    
        printf("Wrong Choice");
        break;

    return 0;
}
}