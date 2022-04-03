#include <stdio.h>

int main()
{
    int a, b, c, sqra, sqrb, sqrc, situation, max, total;

    printf("Enter the three sides of the triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    sqra=a*a;
    sqrb=b*b;
    sqrc=c*c;
    total=a+b+c;

    if (a>b)
    {
        if (a>c)
        {
            situation=1;
            max=a;//a가 가장 김
        }

        else 
        {
            situation=3;
            max=c;//c가 가장 김
        }
    }
    else//(b>a)
    {
        if(b>c)
        {
            situation=2;
            max=b;//b가 가장 김
        }
        else
        {
            situation=3;
            max=c;//c가 가장 김
        }
    
    }

    if (total-2*max>0)
    {
        if(situation==1)
        {
            if (sqrb+sqrc==sqra)
            {
                printf("Right triangle\n");
            }
            else if (sqrb+sqrc>sqra)
            {
                printf("Acute triangle\n");
            }
            else if (sqrb+sqrc<sqra)
            {
                printf("Obtuse triangle\n");
            }
        }

        else if(situation==2)
        {
            if (sqra+sqrc==sqrb)
            {
                printf("Right triangle\n");
            }
            else if (sqra+sqrc>sqrb)
            {
                printf("Acute triangle\n");
            }
            else if (sqra+sqrc<sqrb)
            {
                printf("Obtuse triangle\n");
            }
        }
        else if(situation==3)
        {
            if (sqrb+sqra==sqrc)
            {
                printf("Right triangle\n");
            }
            else if (sqrb+sqra>sqrc)
            {
                printf("Acute triangle\n");
            }
            else if (sqrb+sqra<sqrc)
            {
                printf("Obtuse triangle\n");
            }
        }
    }
    else
    {
        printf("Not possible\n");
    }
    

    return 0;

}