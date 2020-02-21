/*display the temperature at this depth in degrees Celsius and
degrees Fahrenheit.*/

#include <stdio.h>

void celcius_at_depth(double d1); //function to calculate celcius

double fahrenheit(double d2); //function to calculate farehenheit

int
main(void)

{

    double depth;   //input variable

    printf("enter the depth in kilometers...");
    scanf("%lf",&depth);

    celcius_at_depth(depth);
    
  return 0;

}
// function to calculate celcius temperature
void celcius_at_depth (double d1)
{

    double c; // calulates celcius

    c = (10*d1)+20;

    printf("celcius temp  = %.2f ",c);

    fahrenheit(c);

}

//calculates the fahreheit temperature 
double fahrenheit (double d2)

{

    double f ;
    f = (1.8 * d2)+32;

    printf(" Fahrenheit temp = %.2f ",f);



}
