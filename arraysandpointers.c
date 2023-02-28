#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Value at position 3 of the array is %d\n", arr[2]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);      // important
    printf("The address of the second element of the array is %p\n", arr + 1);  // important
    printf("The address of the second element of the array is %d\n\n", &arr[1]); // size of int add hogya
    
    /*
    arr++ -> we cant do this because original ke sath cherhkhani ni 
    soln. ek dusre variable me store kr ke ++ kr do
    */

    printf("The value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", *(arr));      // important
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));  // important
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));

    return 0;
}
