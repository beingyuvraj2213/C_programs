#include <stdio.h>
/*
given two nos. a & b, add them then subtract them and assign them to a & b using call by reference

a=3
b=4

after running the function
a=7
b=1
*/

int add(int *x,int *y)
{
int temp1;
temp1=*x + *y;
return temp1;
}

int subtract(int *m,int *n)
{
int temp2;
temp2=*m - *n;
return temp2;
}

int main()
{
    
    int a=20, b=50;
    printf("Initial values : a=%d b=%d\n", a,b);
    a=add(&a,&b);
    b=subtract(&a,&b);
    printf("Final values : a=%d b=%d", a,b);
}
