#include <stdio.h>

void change(int *x, int* y)
{
    *x=79;
    *y=54;
}

int main()
{
    int a = 34, b = 74;
    printf("Inital Values are : %d and %d \n", a, b);
    change(&a,&b);
    printf("Final Values are : %d and %d \n", a, b);
    
    return 0;
}
