#include <stdio.h>

struct mobile
{
    int ram;
    float storage;
    int speed;
};

int main()
{
    struct mobile phone[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the ram of Phone - %d\n",i+1);
        scanf("%d",&phone[i].ram);
    
        printf("Enter the storage of Phone - %d\n",i+1);
        scanf("%f",&phone[i].speed);

        printf("Enter the speed of Phone - %d\n",i+1);
        scanf("%d",&phone[i].storage);
    }

        for (i = 0; i < 2; i++)
    {
        printf("Ram Of Phone - %d%d\n",i+1,phone[i].ram);
        printf("Storage Of Phone - %d%.1f\n",i+1,phone[i].ram);
        printf("Speed Of Phone - %d%d\n",i+1,phone[i].ram);
    }

        return 0;
}