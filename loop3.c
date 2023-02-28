#include <stdio.h>

int main()
{
    int i,j;
    for (i = 0, j=0; i < 5, j<3; i++,j++) //loop will iterate until the last condition become false
    {
        printf("%d %d\t", i,j);
    }
    return 0;
}
