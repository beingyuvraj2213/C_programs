#include <stdio.h>

// int marks[200] -> Declaration

int main()
{
    int marks[2][4] ;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }

      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
