#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int D, double* x1, double* x2);
double get_discriminant(int a, int b, int c);

int main(void)
{
    int a, b, c;
    double x1, x2;
    double D;

    printf("Enter three coefficients for a quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    
    D = get_discriminant(a,b,c);
    quadratic(a,b,D, &x1, &x2);
    
    if(a!=0)
    {
        if(D>0)
        {
            printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
        else if(D==0)
        {
            printf("x1 = x2 = %.2f\n", x1);
        }
        else
        {
            printf("No real numbers available\n");
        }
    }
    else
    {
        printf("No real numbers available\n");
    }
    return 0;
}
double get_discriminant(int a, int b, int c)
{
    return b*b-4*a*c;
}

void quadratic(int a, int b, int D, double* x1, double* x2)
{
    *x1=(-b+sqrt(D))/(2*a);
    *x2=(-b-sqrt(D))/(2*a);
}


