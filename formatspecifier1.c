#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 8;
    float b= 7.35987;
    printf("The value of a is %d and the value of b is %0.4f\n", a , b );
    printf("The value of b is %10.4f\n", b );     //9- kitna space me likhna h & 4-decimal ke bad digit rkhna h
    printf("The value of b is %-18.4f apple", b );    // minus lgane se aage se jgh chhorta h
    return 0;
}
