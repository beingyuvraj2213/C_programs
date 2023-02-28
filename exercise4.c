#include <stdio.h>

void arrayRev(int arg[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arg[i];
        arg[i] = arg[6 - i];
        arg[6 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printf("Before reversing the array\n");

    for (int i = 0; i < 7; i++)
    {
        printf("%d  ", arr[i]);
    }

    arrayRev(arr);
    printf("\nAfter reversing the array\n");

    for (int j = 0; j < 7; j++)
    {
        printf("%d  ", arr[j]);
    }

    return 0;
}
