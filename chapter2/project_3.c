#include <stdio.h>

main (void)

{
	double t,T ;
     int h,m;

   printf("enter time in hours and minutes \n ");
  scanf("%d %d",&h,&m);
 

   t = h+(double)m/60;
    printf("time of power failure is %f \n hours",t);
   T = ((4*t*t)/(t+2))-20;
 
   printf("Temperature of Freezer is %0.2f degree celcius",T);
   
}

