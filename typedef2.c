#include <stdio.h>
#include<string.h>
typedef struct Student // new data type "Student" has been created
{
    int id;
    int marks;
    char fav_char;
    char address[100];
}std; 


int main()
{
    std yuvraj, sujeet, aayush;

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
    printf("Aayush got %d marks\n", aayush.marks);
    printf("Sujeet got %d marks\n", sujeet.marks);
    

    return 0;
}
