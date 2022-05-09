int count1=0;
    int situation=0;
    

    for(int i=0; i<MAXLEN; i++)
    {
        if(former[i]=='?')
            count1=i;
        else    
            continue;
    }

    if(count1!=0)
    {
        for(int i=0; i<count1; i++)
            if(former[i]==latter[i])
                continue;
            else
                situation++;
        for(int j=count1+1; j<MAXLEN; j++)
            if(former[j]==latter[j-1])
                continue;
            else
                situation++;
    }
    else    
    {
        for(int i=0; i<MAXLEN; i++){
            if(former[i]==latter[i]||former[i]=='?')
                continue;
            else
                situation++;
        }
    }


    if(situation==0)
        return 1;   
    else 
        return 0;
}