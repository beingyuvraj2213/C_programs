#include <stdio.h>

int sum(int a, int b) // if you want to write the function after writing main, then just declare it before main fn.
{
    return a + b;
}

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takenumber()
{ 
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}

    int main()
    {
        int a, b, c,num;
        a = 9;
        b = 87;
        c = sum(a, b);
        printf("The sum is : %d\n", c);
        printstar(7);
        num=takenumber();
        printf("The Number Entered Is : %d",num);
        return 0;
    }
