#include <stdio.h>

int main()
{
    unsigned long n;
    printf("Enter a decimal number (0 < n < 2^32): ");
    scanf("%ld", &n);
    int count=0, j=1;
    unsigned long number=n;
    int N,array_num[N];
    
    
    while(number!=0)
    {
        number/=16;
        count+=1;
    }
   
    for(j=1; j<=count; j++)
    {
        int i=n%16;
        if (i<10)
        {
            array_num[j]=i+48;
                
        }
        else 
        {
            array_num[j]=i+=55;
                
        }
        n/=16; 
    }   
    
    printf("0x");
    for(int i=1; i<=count; i++)
    {
        printf("%c", array_num[count-i+1]);
    }
}
