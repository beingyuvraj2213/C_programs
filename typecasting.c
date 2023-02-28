#include <stdio.h>

int main()
{
    int a = 3;
    float b = 54;
    float c = 54 / 5; // important
    float d = (float)54 / 5;
    printf("The value of a is %d\n", (int)b);
    printf("value of c is %f\n", c);
    printf("value of d is %f", d);
    return 0;
}
