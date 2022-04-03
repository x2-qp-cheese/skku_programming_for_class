#include <stdio.h>

// Ex2. Palindrome

int main() {
    unsigned int n;
    printf("Enter an integer: ");
    scanf("%u", &n);

    int count;
    int array[100];
    int situation;
    unsigned int number=n;
    
    while(n!=0)
    {
        n=n/10;
        count+=1;
    }
    
    for(int i=1; i<=count; i++)
    {
        array[i]=number%10;
        number=number/10;
    }

    for(int j=1; j<=count; j++)
    {
        if(array[j]==array[count-j+1])
        {
            situation=0;
        }
        else
        {
            situation=1;
        }  
    }  

    if(situation==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}