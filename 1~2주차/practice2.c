#include <stdio.h>

int main(void)
{
   float dist, hr, min, sec, speed_km, speed_mile;
    
   printf("Enter a distance (m): ");
   scanf("%f", &dist);
   printf("Enter an hour: ");
   scanf("%f", &hr);
   printf("Enter a minute: ");
   scanf("%f", &min);
   printf("Enter a second: ");
   scanf("%f", &sec);
   
   speed_km = (dist/1000)/(hr + min/60 + sec/3600);
   speed_mile = (dist/1600)/(hr + min/60 + sec/3600);

   printf("Speed (km/hr)  : %.2f \n", speed_km);
   printf("Speed (mile/hr): %.2f \n", speed_mile);
  return 0;
}