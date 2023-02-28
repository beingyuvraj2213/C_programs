#include <stdio.h>

int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);  //output me 4 add hua (wo actually size of int add krta h & in my architecture - size of int is 4)
    printf("%d", ptra + 2);
    return 0;
}
