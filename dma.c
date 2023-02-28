// dynamic memory allocation is a way to allocate memory and free memory at the runtime
// malloc(memory allocation), calloc(contiguous allocation), realloc(reallocation), free - functions for dynamic memory allocation
// int *ptr;
// ptr=(int*) malloc(3*sizeof(int));
// ptr=(int*) calloc(n(kitne blocks chahiye),sizeof(int));
// ptr=(int*) realloc(ptr, new_size_in_bytes);
// free(ptr);

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create : ");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int)); // a dynamic array of size 10 will be created
    for (int i = 0; i < n; i++)
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