#include <stdio.h>

int main()
{
    int SY;
    float GPA, tuition, EF, GF;

    tuition = 4000;
    EF = 400;
    GF = 1000;

    printf("Enter the school year : ");
    scanf("%d", &SY);

    if (SY==1)
    {
        printf("Your school tuition : $%.1f\n", tuition+EF);
    }
    else if(SY==2 || SY==3)
    {
        printf("Enter your previous semester average grade score : ");
        scanf("%f", &GPA);
        
        if (4.5 >= GPA && GPA>=4.0)
        {
            printf("Your school tuiton : $%.1f\n", (tuition)*0.5);
        }
        else if (4.0> GPA && GPA >=3.7)
        {
            printf("Your school tuition : $%.1f\n", (tuition)*0.7);
        }
        else if (3.7 > GPA && GPA>=3.5)
        {
            printf("Your school tuition : $%.1f\n", (tuition)*0.9);
        }
        else if (3.5 > GPA && GPA>=1.0)
        {
            printf("Your school tuition : $%.1f\n", tuition);
        }
        else
        {
            printf("Invalid Input\n");
        }
    } 
    
    else if(SY==4)
    {
        printf("Enter your previous semester average grade score : ");
        scanf("%f", &GPA);
        
        if (4.5 >= GPA && GPA>=4.0)
        {
            printf("Your school tuiton : $%.1f\n", (tuition+GF)*0.5);
        }
        else if (4.0> GPA && GPA >=3.7)
        {
            printf("Your school tuition : $%.1f\n", (tuition+GF)*0.7);
        }
        else if (3.7 > GPA && GPA>=3.5)
        {
            printf("Your school tuition : $%.1f\n", (tuition+GF)*0.9);
        }
        else if (3.5 > GPA && GPA>=1.0)
        {
            printf("Your school tuition : $%.1f\n", tuition+GF);
        }
        else
        {
            printf("Invalid Input\n");
        }
    } 

    else
    {
        printf("Invalid Input\n");
    }
    
    return 0;
}