#include <stdio.h>

int main()
{
    int age,marks;
    printf("Enter Your Age\n");
    scanf("%d",&age);

    printf("Enter Your Marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
    printf("Age is 3\n"); 
    
    switch (marks)
    {
    case 45:
    printf("Your marks are 45\n");
        break;
    
    default: 
    printf("Your marks are not 45");
        break;
    }
        break;
    
    case 13:
    printf("Age is 13\n"); 

    switch (marks)
    {
    case 50:
    printf("Your marks are 50");
        break;
    
    default: 
    printf("Your marks are not 50");
        break;
    } 


        break;

    default:
    printf("Age is not 3,13,23");
        break;
    }

     return 0;
}
