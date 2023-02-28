#include <stdio.h>

struct Student // new data type "Student" has been created
{
    int id;
    int marks;
    char fav_char;
    char address[100];
}; // s1,s2,s3; //or struct Student s1,s2,s3;

void print()
{
    printf("Yuvraj is a good programmer");
}

int main()
{
    struct Student yuvraj, sujeet, aayush;
    struct Student amritesh = {4, 96, 'm'}; // another way of assigning values
    yuvraj.id = 1;
    sujeet.id = 2;
    aayush.id = 3;
    yuvraj.marks = 89;
    sujeet.marks = 93;
    aayush.marks = 97;
    yuvraj.fav_char = 'a';
    sujeet.fav_char = 'b';
    aayush.fav_char = 'c';
    strcpy(yuvraj.address, "Shiv Dayal Nagar, Hazaribagh");
    printf("Yuvraj got %d marks\n", yuvraj.marks);
    printf("Amritesh got %d marks\n", amritesh.marks);
    printf("Aayush got %d marks\n", aayush.marks);
    printf("Sujeet got %d marks\n", sujeet.marks);
    printf("Address of Yuvraj : %s\n", yuvraj.address);

    print();

    return 0;
}
