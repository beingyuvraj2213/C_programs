#include <stdio.h>
int main()
{
  //  int *a,b; only a will be declared as pointer and b is of integer data type
    typedef int* intPointer;
    intPointer a,b;
    int c;
    a=&c;
    b=&c;

return 0;
}