nt gcd;
    if(M>N)
    {
        if(M%N!=0)
        {
            return get_gcd_recursive(M, N - 1);
        }
        else if(M%N==0)
        {
            gcd=N;
        }
    }
    else if(N>M)
    {
        if(M%N!=0)
        {
            return get_gcd_recursive(M - 1, N);
        }
        else if(M%N==0)
        {
            gcd=M;
        }

    }
    else if(M==N)
    {
        gcd=M;
    }
    return gcd;
    
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
    return lcm;