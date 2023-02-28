#include <stdio.h> //pointer is a variable which stores the address of another variable

/*
int a=4;
int* ptr=&var; (var will store location of a)
NOTE : &a means address of a
NOTE : *p means value of ..... , * is a deference operator used  to get the value at a given address
*/

int main()
{
    int a = 76;
    int* ptra = &a;

    printf("the address of pointer to a is %p\n", &ptra);  //Address print krane ke liye %p or %x
    printf("the address of a is %p\n", &a);
    printf("the address of a is %p\n", ptra);
    printf("the value of a is %d\n", *ptra); //dereference
    printf("the value of a is %p\n", ptra); 
    
    printf("the value of a is %d\n", a);
    return 0;
}
