#include<stdio.h>

int main()
{
	int M,N;
	int cnt = 0;
    int i=M;

	printf("Enter the value of M: ");
	scanf("%d",&M);
	printf("Enter the value of N: ");
	scanf("%d",&N);

    
    for(i=M; i<=N; i++)
    {
        cnt = 0;
        for(int n=1; n<=i; n++)
        {
            if (i%n==0)
            {
                cnt++;
            }
        }

        if(cnt==2)
        {
            printf("%d", i);
        }
    }


    return 0;
}