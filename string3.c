//strcat() - concatenate the string - strcat("Yuvraj","Java"); - YuvrajJava
//strlen() - show length of the string - strlen("Yuvraj"); - 6
//strrev() - reverse the string 
//strcpy() - used to copy one string to another string - strcpy(s2,s1); - copies s1 to s2
//strcmp() - to compare two given strings (gives ASCII diff of 1st matching character) - 
             //strcmp("sold","tight") - 1

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="yuvraj";
    char s2[]="dhoni";
    char s3[100];
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The reverse string s1 is %s\n", strrev(s1));

    strcpy(s3 , strcat(s1,s2));
    puts(s3);
    printf("The strcmp for s1 and s2 is %d\n", strcmp(s1,s2));


    return 0;
}
