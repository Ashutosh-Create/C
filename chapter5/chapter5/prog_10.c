#include<stdio.h>
#define a 3.592
#define b 0.0427
#define r 0.0826

int
main (void)
{
    double n;
        int temp,
           initv,
           finalv,
           i,
           increment;
 double vol,
        pressure;

      printf("enter the desired values...");
     printf("quantity of carbon dioxide (moles) > ");
     scanf("%lf",&n);
     printf("temperature (kelvin) >  ");
     scanf("%d",&temp);
     printf("Initial volume (milliliters)> ");
     scanf("%d",&initv);
     printf("Final volume (milliliters)> ");
     scanf("%d",&finalv);
     printf("volume increment (millimeters) >");
     scanf("%d",&increment);

     printf("%.4f moles of carbon dioxide at %d kelvin ");
     printf("Volume (ml)\tPressure (atm)\n");
     for (i = initv ; i <= finalv ;i+=increment)
     {
         vol = i/1000.0;
         pressure = (n*r*temp)/(vol - b*n)-(a*n*n)/(vol*vol);
         printf("%d\t\t%.4f\n",i,pressure);
     }
      return(0);

}
