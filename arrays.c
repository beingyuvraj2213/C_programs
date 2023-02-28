#include <stdio.h>

// int marks[200] -> Declaration

int main()
{
    int marks[4]; // Aliter int marks[]={10,15,30,60}

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of array\n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of array is %d\n", i, marks[i]);
    }

    return 0;
}
