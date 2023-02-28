#include <stdio.h>
#define PI 3.14

int main()
{
    const float b = 7.33;
    float c=5.732;
    // PI = 7.23; cannot do this since PI is a constant
    // b= 7.9; cannot do this since b is a constant
    printf("%0.1f\n" , PI);
    printf("%f\n" , b );
    printf("%0.1f" , c );
    
    return 0;
}
