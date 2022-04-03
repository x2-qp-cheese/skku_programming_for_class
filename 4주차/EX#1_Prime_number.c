#include<stdio.h>

int main()
{
	int M,N;
	int cnt = 0;
    int condition;

	printf("Enter the value of M: ");
	scanf("%d",&M);
	printf("Enter the value of N: ");
	scanf("%d",&N);

    
    for(int i=M; i<=N; i++)
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
            printf("%d ", i);
            condition = 1;
        }
        

    }
    if (condition != 1)
    {
        printf("None");
    }

   //소수가 존재하지 않으면 None

    return 0;
}