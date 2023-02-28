#include<stdio.h>

int main()
{
    printf("Enter the number of character in string : ");
    int n;
    scanf("%d",&n);
    char name[n];

    for (int i=0;i<n;i++)
    {
        printf("Enter the %dth character : ",i+1);
        scanf(" %c",&name[i]);
    }

    printf("Entered string is %s",name);

    return 0;
}

