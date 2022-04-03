#include <stdio.h>

int get_gcd(int, int);//최대공약수
int get_gcd_recursive(int, int);//재귀함수를 이용한 최대공약수
int get_lcm(int, int); //최소 공배수
int get_ncf(int, int); //공약수의 개수

int main()
{
    int M,N;
    printf("Enter the value of M : ");
    scanf("%d", &M);
    printf("Enter the value of N : ");
    scanf("%d", &N);


    printf("%d %d %d %d ",get_gcd(M, N) ,get_gcd_recursive(M, N) , 
                   get_lcm(M, N) ,get_ncf(M, N));

    printf("%d\n", get_gcd(M, N) + get_gcd_recursive(M, N) + \
                   get_lcm(M, N) + get_ncf(M, N));


	return 0;   
}


int get_gcd(int M , int N)
{
    int gcd;
    for(int i=1; i<=M||i<=N; i++)
    {
        if(M%i==0&&N%i==0)
        {
            gcd=i;
        }
    }
    return gcd;

}

int get_gcd_recursive(int M, int N)
{
    if(M>=N)
    {
        if(M%N!=0)
        {
            return get_gcd_recursive(N,M%N);
        }
        if(M%N==0)
        {
            return N;
        }
    }
    else if(N>M)
    {
       return get_gcd_recursive(N,M);
    } 
    return N;
}

int get_lcm(int M, int N)
{
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
    else if(N>M)
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
    else
    {
        lcm=M;
    }

    return lcm;
}

int get_ncf(int M,int N)
{
    int gcd;
    int ncf, count=0;
    
    for(int i=1; i<=M||i<=N; i++)
    {
        if(M%i==0&&N%i==0)
        {
            gcd=i;
            count+=1;
        }
    }
    return count;
}