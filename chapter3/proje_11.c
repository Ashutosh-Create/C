/* to calculate ratio of maximum and minimum speed*/

#include <stdio.h>
#include <math.h>

double speeds_ratio(double M,double m);

int
main(void)

{

    double max,min;   //input variables 

    printf("enter the maximum speed in revolutions per minute>> ");
    scanf("%lf",&max);

     printf("enter the minimum speed in revolutions per minute>> ");
     scanf("%lf",&min);

     printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %f rpm and minimum speed %f rpm is %f.",max,min,speeds_ratio(max,min));

}

// ratio calculation
double
speeds_ratio(double M,double m)

{

    double a,t; //

    a = M/m;

    t = pow(a,0.2);

    return t;





}
