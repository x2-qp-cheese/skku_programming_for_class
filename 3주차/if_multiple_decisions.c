#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grading [A-F]: ");
    scanf("%c", &grade);

    if(grade == 'A') //이걸 왜 하는거임? '' char이라서 ''안붙이면 인식을 못함 변수인줄알음
    {
        printf("Grade: A\n");
    }
    else if(grade == 'B')
    {
        printf("Grade: B\n");
    }
    else if(grade == 'C')
    {
        printf("Grade: C\n");
    }else if(grade == 'D')
    {
        printf("Grade: D\n");
    }else if(grade == 'F')
    {
        printf("Grade: F\n");
    }
    else
    {
        printf("Wrong grading!\n");
    }

    return 0;
}