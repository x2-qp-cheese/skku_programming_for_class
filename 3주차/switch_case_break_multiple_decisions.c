#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grading [A-F]: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Grade: A\n");
        break;
        
        case 'B':
            printf("Grade: B\n");
        break;
        
        case 'C':
            printf("Grade: C\n");
        break;

        case 'D':
            printf("Grade: D\n");
        break;

        case 'F':
            printf("Grade: F\n"); 
        break;
        default:
            printf("Wrong grading!\n");
    }
    return 0;
}