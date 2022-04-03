#include <stdio.h>
#include <math.h>

void solve_quadratic_equation(int, int, int);  // Function prototype

// Ex3. Quadratic equation

int main(void) {
        int a, b, c;
        printf("a = ");     scanf("%d", &a);
        printf("b = ");     scanf("%d", &b);
        printf("c = ");     scanf("%d", &c);

        solve_quadratic_equation(a, b, c);
        return 0;
}

void solve_quadratic_equation(a,b,c)
{
        float D=b*b-4*a*c;
        float x,x1,x2;
        
        if (D==0)
        {
                x=(-b)/(2*a);
                printf("%.3f",x);
        }
        else if(D>0)
        {
                x1=(-b+sqrt(D))/(2*a);
                x2=(-b-sqrt(D))/(2*a);
                printf("x1 = %.3f, x2 = %.3f", x1, x2);
        }
        else if(D<0)
        {
                printf("No solution available!");
        }
}

// Write your code below
