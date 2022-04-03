#include <stdio.h>
int commercial(int, int);

int private(int, int);

int main()
{
    int year, cc, type;
    printf("Enter the model year of your car: ");
    scanf("%d", &year);
    printf("Enter the CC of your car: ");
    scanf("%d", &cc);
    printf("Enter the type of your car: ");
    scanf("%d", &type);

    int tax = 0;

    switch (type)
    {
        case 0:
            tax = commercial(year, cc);
            break;
        case 1:
            tax = private(year, cc);
            break;
        default:
            printf("Invalid\n");
    }

    if(tax > 0)
        printf("Car tax: %d\n", tax);
    
    return 0;
}

int commercial(int year, int cc)
{
    int tax;
    
    if(1600>=cc)
    {
        tax=18*cc;
        if(year>=3&&year<=11)
        {
            tax=tax*(1-0.05*(year-2));
        }
        else if(year>11)
        {
            tax=tax*0.5;
        }
    }
    else if(1600<cc&&2400>=cc)
    {
        tax=19*cc;
        if(year>=3&&year<=11)
        {
            tax=tax*(1-0.05*(year-2));
        }
         else if(year>11)
        {
            tax=tax*0.5;
        }
    }
    else if(2400<cc)
    {
        tax=24*cc;
        if(year>=3&&year<=11)
        {
            tax=tax*(1-0.05*(year-2));
        }
         else if(year>11)
        {
            tax=tax*0.5;
        }
    }

    tax=tax*(1.3);

    return tax;
}

int private(int year, int cc)
{
    int tax;
    
    if(1000>=cc)
    {
        tax=80*cc;
        if(year>=3&&year<=11)
        {
            tax=tax*(1-0.05*(year-2));
        }
        else if(year>11)
        {
            tax=tax*0.5;
        }
    }
    else if(1000<cc&&1600>=cc)
    {
        tax=140*cc;
        if(year>=3&&year<=11)
        {
            tax=tax*(1-0.05*(year-2));
        }
         else if(year>11)
        {
            tax=tax*0.5;
        }
    }
    else if(1600<cc)
    {
        tax=200*cc;
        if(year>=3&&year<=11)
        {
            tax=tax*(1-0.05*(year-2));
        }
         else if(year>11)
        {
            tax=tax*0.5;
        }
    }

    tax=tax*(1.3);

    return tax;
}