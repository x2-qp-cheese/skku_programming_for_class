#include <stdio.h>

// Ex1. Multiplication table

int main()
{
   int n;
   printf("Enter a number for a multiplication table: ");
   scanf("%d",&n);
   
   if(n==1)
   {
       for(int i=1; i<=9; i++)
       {
           printf("%dx%d=%d\n",n,i,n*i);
       }
   }
   else if(n!=1)
   {
       for(int i=1; i<=9; i++)
       {
           for(int j=1; j<=n; j++)
           {
               printf("%dx%d=%d",j,i,j*i);
               if(j!=n)
               {
                   printf(", ");
               }
                else if(j==n)
               {
                   printf("\n");
               }
           }
       }
   }
   return 0;
}