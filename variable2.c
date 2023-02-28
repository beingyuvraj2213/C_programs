#include <stdio.h>

// static int b=func(); will throw error because static variable wants value before the execution of main function
int b = 34;
int func1(int a)
{

    static int myvar = 98;
    printf("The value of my var is %d\n", myvar);
    myvar++;

    return a + myvar;
}

int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    return 0;
}