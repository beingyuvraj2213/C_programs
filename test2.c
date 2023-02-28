#include <stdio.h>
void main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for (int i; i < 4; i++)
    {
        printf("Enter the value of %dth student= ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int j; j < 4; j++)
        printf("The value of the %d is %d \n ", j + 1, marks[j]);

}
