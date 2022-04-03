#include <stdio.h>

int main()
{
    int total_num;
    int num_arr[100];
    printf("Enter the total number: ");
    scanf("%d", &total_num);
   
    int number, max=num_arr[0], arry_num;
   
    for(int i=0; i<total_num; i++)
    {
        scanf("%d", &number);
        num_arr[i]=number;
    }
   
    for(int a=0; a<total_num; a++)
    {
        if(max<num_arr[a])
        {
            max =num_arr[a];
            arry_num=a+1;
        }
    }
    
    printf("%d %d", max, arry_num);

    
    
    return 0;
}