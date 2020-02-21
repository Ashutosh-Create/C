/*  calculates the speed of sound ( a ) in air of a given temperature T (°F)*/

#include <stdio.h>
#include <math.h>

void instructions();
double calculate_speed(double t);
int
main(void)
{
  double T,a; //variables

  instructions();
  scanf("%lf",&T);
  a= calculate_speed(T);
  printf("speed in ft/sec = %lf ",a);
}

void
instructions()
{
  printf("enter the temperature in fahrenheit and then press enter\n ");

}

double calculate_speed(double t)
{
  double x,y;
  y =((5*t)+ 297)/247;
  x = 1086*sqrt(y);
  return x;
  }

