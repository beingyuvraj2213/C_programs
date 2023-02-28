#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create : ");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int)); // a dynamic array of size 10 will be created
    for (int i = 0; i < n-2; i++)
    {
        printf("\nEnter the value no. %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }

      for (int i = 0; i < n; i++)
    {
        printf("The value at %d position of this array is %d\n",i,ptr[i]);
    }
    

    return 0;
}