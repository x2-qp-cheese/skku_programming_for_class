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
        case 'B':
        printf("Grade: B\n");
        case 'C':
        printf("Grade: C\n");
        case 'D':
        printf("Grade: D\n");
        case 'F':
        printf("Grade: F\n");
        default:
        printf("Wrong grading!\n");
    }
    return 0;
}