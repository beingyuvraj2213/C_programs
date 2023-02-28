#include <stdio.h>

/*void printName(char name[])
{
    int i=0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
}
*/
int main()
{
    char name[50];
    gets(name);
    //printName(name);
    printf("%s\n",name);
    puts(name);
    return 0;
}