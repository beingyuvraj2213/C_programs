/*
You manage a travel agency and you want your n drivers to input their following details :
n=3
1. Name
2. Driving Liscence No.
3. Route
4. Kms
Your program should be able to take n as input and your drivers will start inputting their details one by one

Your program should print details of the drivers in a beautiful fashion
*/

#include <stdio.h>

typedef struct Driver
{
    char name[34];
    char dlNo[45];
    char route[40];
    int kms;
} dr;

int main()
{
    dr d1, d2, d3;
    printf("Enter the details of the driver\n");

    printf("Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the driving liscence no. of the first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the no. of kms of the first driver\n");
    scanf("%d", &d1.kms);

    printf("Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the driving liscence no. of the second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of the second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the no. of kms of the second driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the name of the third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the driving liscence no. of the third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of the third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the no. of kms of the third driver\n");
    scanf("%d", &d3.kms);

    printf("Printing information of these drivers\n");

    printf("For Driver No. 1 : \n Name is %s", d1.name);
    printf("\nDriving liscence no. is : %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    printf("For Driver No. 2 : \n Name is %s", d2.name);
    printf("\nDriving liscence no. is : %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);

    printf("For Driver No. 3 : \n Name is %s", d3.name);
    printf("\nDriving liscence no. is : %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);

    return 0;
}