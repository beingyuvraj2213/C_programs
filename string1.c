#include <stdio.h>
// String is just array of charactrers terminated by NULL character
// String is a character array in C Lang.
// char name[]="harry";
// char name[]={'h','a','r','r','y','\o;};

/*
Taking input from user
char str[52];
gets(str);
printf("%s",str);
puts(str);  Aliter to print the string str
*/
void printName(char name[])
{
    int i=0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
}

int main()
{
    char name[] = {'y', 'u', 'v', 'r', 'a', 'j', '\0'};
   // char name[]="YUVRAJ";
    printName(name);  //important

    return 0;
}
