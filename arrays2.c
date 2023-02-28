#include <stdio.h>

// int marks[200] -> Declaration

int main()
{
    int i,j;
    int marks[2][4];
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the (%d,%d)th element of the array",i,j);
            scanf("%d",&marks[i][j]);
        }
     
    }


    // int marks[2][4] = {{3, 9, 27, 81}, {4, 16, 64, 216}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
