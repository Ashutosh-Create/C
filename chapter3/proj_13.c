#include <stdio.h>
#define c 1990
double population(int t);

int
main(void)
{

    int y;
    printf("Enter a year after 1990> ");
    scanf("%d",&y);
    printf("Predicted Gotham City population for %d (in thousands): %.3f",y,population(y));


}

double
population(int t)
{
   double p;
   int a ;
   a = t - c;
   p = 52.966 +(2.184*a);
   return p;

}
