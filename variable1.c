#include <stdio.h>


int b=34;
int func1(int a)
{
    printf("The address of b inside func1 is %d\n", &b);
    return a ;
}

int main()
{
    int b = 344;
    printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    int *ptr = &val;
    printf("The value of func1 is %d", val);

    return 0;
}