#include <stdio.h>

/*
int func1(int array[])
{


    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i,array[i]);
    }
    array[0]=382;  //array ke case me actual value change hojayega

    }
    */
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6000;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    func2(arr);
    // func1(arr);
    func2(arr);
    //printf("New value at index 2 is %d", arr[2]);
    return 0;
}
