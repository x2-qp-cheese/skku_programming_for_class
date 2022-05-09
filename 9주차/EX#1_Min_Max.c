#include <stdio.h>

// Function prototype
void find_min_max(int*, int*, int*, int* max, int* min);

int main()
{
	int a, b, c;
    int max, min;
	
	  // Taking three integers
    printf("Enter three integers: \n");
	scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);

 
    find_min_max(&a,&b,&c,&max,&min);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
	
}

void find_min_max(int* a, int* b, int* c, int* max, int* min)
{
    if(*a>*b&&*a>*c)
    {
        *max=*a;
        if(*b>*c)
        {
            *min=*c;
        }
        else
        {
            *min=*b;
        }
    }
    else if(*b>*a&&*b>*c)
    {
        *max=*b;
        if(*a>*c)
        {
            *min=*c;
        }
        else
        {
            *min=*a;
        }
    }
    else if(*c>*a&&*c>*b)
    {
        *max=*c;
        if(*a>*b)
        {
            *min=*b;
        }
        else
        {
            *min=*a;
        }
    }
}

    // Write your code to call the find_min_max() function