#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    if(++a == 0 && ++b == 1)
    {
        printf("first if\n");
    }
    if(++a == 2 || ++b == 2)
    {
        printf("second if\n");
    }
    printf("a: %d, b: %d\n", a, b);

    return 0;
}