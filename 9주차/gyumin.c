#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int D, double* x1, double* x2);
double get_discriminant(int a, int b, int c);

int main(void) {
    int a, b, c;
    double x1, x2;
    double D;

    printf("Enter three coefficients for a quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    
      /*
       Write your code here
      Depending on D, we may have three cases: 
        i) D == 0 : one solution (x1 = x2)
          ii) D > 0 : two solutions
          iii) D < 0: no solution
          
      Use the following formats for printing out your answers per each case
        i) "x1 = x2 = %.2f\n"
        ii) "x1 = %.2f, x2 = %.2f\n"
        iii) "No real numbers available\n"
      */

      D = get_discriminant(a, b, c);
      quadratic(a, b, D, &x1, &x2);
    return 0;
}
// Write your functions here
void quadratic(int a, int b, int D, double* x1, double* x2) {
      if (D == 0) {
         *x1 = -b/(2*a);
         printf("x1 = x2 = %.2f\n", *x1);
      }
      else if (D > 0) {
         *x1 = (-b + sqrt(D))/(2*a);
         *x2 = (-b - sqrt(D))/(2*a);
         printf("x1 = %.2f, x2 = %.2f\n", *x1, *x2);
      }
      else
      printf("No real numbers available\n");
   }


double get_discriminant(int a, int b, int c) {
   return b*b - 4*a*c;
}