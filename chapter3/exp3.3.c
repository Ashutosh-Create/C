/* compute the length of the third side ( a ) using the following formula  a^2 = b^2 + c^2 - 2bc cos (alpha)*/

#include <stdio.h>
#include <math.h>
# define PI 3.1415
int
main(void)

{
   double b,c , //2 sides of triangle- input
		  alpha, // angle btw b and c in degree - input
		  a;    //3rd side of triangle - output
   printf("enter the two sides of the triangle and the angle btween them in degrees!! ");
   scanf("%lf%lf%lf",&b,&c,&alpha);

   a = sqrt(pow(b,2) + pow(c,2)- 2 * b * c * cos(alpha * PI / 180.0)); //calculation

   printf("third sideof triangle = %.3f\n",a);

}



  	
