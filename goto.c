#include <stdio.h>

int main(int argc, char const *argv[])
{
label:
    printf("we are inside label");
    goto end;
    printf("Hello Everyone");
    goto label;

end:
    printf("we are at the end");

    return 0;
}
