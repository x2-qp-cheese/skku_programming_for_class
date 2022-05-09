#include <string.h>
#include <stdio.h>

#define MAXLEN 100
#define WILDCARD '?'
#define FALSE 0
#define TRUE 1
#define NO_WILDCARD -1

int is_equal(char* former, char* letter);

int main()
{
    char former[MAXLEN] = {0, };
    char latter[MAXLEN] = {0, };

    printf("String#1: ");
    scanf("%s", former);
    printf("String#2: ");
    scanf("%s", latter);

    
    if(is_equal(former, latter))
        printf("Equal!\n");
    else
        printf("Not equal!\n");

    return 0;
}

int is_equal(char* former, char* latter){
    int count1=-1;
    int situation=0;
    
    for(int i=0; i<MAXLEN; i++){
        if(former[i]=='?'){
            count1=i;
        }
        else 
            continue;
    }
    

    if(strlen(former)==strlen(latter)){
        for(int i=0; i<MAXLEN; i++){
            if(former[i]==latter[i]||former[i]=='?')
                continue;
            else
                situation++;
        }
    }
    else if(strlen(former)!=strlen(latter)&&count1!=-1){
        for(int i=0; i<count1; i++){
            if(former[i]==latter[i])
                continue;
            else
                situation++;
            
        }
        for(int i=count1; i<strlen(former); i++){
            if(former[i+1]==latter[i]){
                continue;
            }
            else
                situation++;
        }

    }
    else
        situation++;



    if(situation==0)
        return 1;
    else
        return 0;
}