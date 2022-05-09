#include <stdio.h>

int main(void)
{
    int i = 100;
    int* p = &i;

    printf("%d\n", *p);

    *p = 200;
    printf("%d\n", *p);

    return 0;
}