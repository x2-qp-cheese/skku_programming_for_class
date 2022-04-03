#include <stdio.h>

int main(void)
{
    float distance, hour, minute, second, km, mile, hr;
    
    printf("Enter a distance (m): ");
    scanf("%f", &distance);
    printf("Enter an hour: ");
    scanf("%f", &hour);
    printf("Enter a minute: ");
    scanf("%f", &minute);
    printf("Enter a second: ");
    scanf("%f", &second);
    
    km = distance/1000;
    mile = km/1.6;
    hr = hour + minute/60 + second/3600;

    printf("Speed (km/hr)  : %.2f \n", km / hr);
    printf("Speed (mile/hr): %.2f \n", mile / hr);
    return 0;
}