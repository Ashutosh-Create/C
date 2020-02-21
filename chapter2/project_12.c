#include <stdio.h>

main(void)

{

  double v,a,t,s;

   printf("enter takeoff speed in km/hr");
   scanf("%lf",&v);
   printf("enter the distance in meters ");
   scanf("%lf",&s);

   t = (2*s)/v;
   a = v/t;

   printf("time = %f hrs\nacceleration = %f km/hr",t,a);

}

