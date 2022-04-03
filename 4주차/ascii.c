#include <stdio.h>

int main()
{
    int c;

    while ((c=getchar()) != EOF)
    {
        if((c>= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z'))
        {
            printf("Character: %c, ASCII value: %d\n", c, c);
        }
    }
return 0;
}