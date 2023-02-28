#include <stdio.h> //pointer is a variable which stores the address of another variable
//a pointer that is not assigned any value but null is known as null pointer


int main()
{
    int a ;
    int *ptr2 ;
    int *ptr3=NULL;
    printf("The address of some garbage is : %p\n", *ptr2);
    printf("The address of some garbage is : %p", ptr3);
    return 0;
}
