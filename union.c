#include <stdio.h>
#include <string.h>
// In structures, each member has its own storage location whereas members of aunion uses a single shared memory location
// The single shared memory location is equal to the size of its largest member
// Union cannot handle all members at once
// We can use unions to introduce better memory management in our c program

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
};

int main()
{

    union Student s1;
    s1.id=1;
    s1.fav_char='M';
    s1.marks=45;
    strcpy(s1.name,"Yuvraj"); //only last one is active

    printf("The id is %d \n",s1.id);
    printf("The marks is %d \n",s1.marks);
    printf("The favourite character is %c \n",s1.fav_char);
    printf("The name is %s \n",s1.name);

    return 0;
}