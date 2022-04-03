#include <stdio.h>

int main()
{
    int M,N;
    scanf("%d %d", &M, &N);
    int lcm;
    if(M>N)
    {
        for(int j=N; j>0; j++)
        {
         
            if(j%M==0&&j%N==0)
            {
                lcm=j;
                break;
            }
        }
    }
    if(N>M)
    {
        for(int j=M; j>0; j++)
        {
           
            if(j%M==0&&j%N==0)
            {
                lcm=j;
                break;
            }
        }
    }
    printf("%d", lcm);
    return 0;
 

}