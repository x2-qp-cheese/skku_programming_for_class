#include <stdio.h>

int main()
{
    
    int num_for_369, sum=0;
    
    printf("Enter the number for playing a 369 game : ");
    scanf("%d", &num_for_369);
    for(int i=0; i<=num_for_369; i++)
    {
        if( i % 10 == 3 || i % 10 == 6 || i % 10 == 9 )
            sum++;
        if( i / 10 % 10 == 3 || i / 10 % 10 == 6 || i / 10 % 10 == 9  )
            sum++;
        if( i / 10 / 10 % 10 ==3 ||  i / 10 / 10 % 10 ==6 ||  i / 10 / 10 % 10 ==9)
            sum++;
        if( i / 10 / 10 / 10 % 10 ==3 ||  i / 10 / 10 / 10 % 10 == 6 ||  i / 10 / 10 / 10 % 10 == 9)
            sum++;
        if( i / 10 / 10 / 10 /10 % 10 ==3 || i / 10 / 10 / 10 /10 % 10 ==6 || i / 10 / 10 / 10 /10 % 10 ==9)
            sum++;
        
    }
     printf("%d\n", sum);
}
 