#include<stdio.h>

double fast_food_billions(int year);

int
main(void)
{
    int year;
    double charge;

     printf("enter year after 2005 ");
     scanf("%d",&year);

     while(year>=2005)
     {
         charge = fast_food_billions(year);
         printf("fast food charge for %d is $%.2f billion\n ",year,charge);
         printf("enter year after 2005 : ");
         scanf("%d",&year);
     }
     return(0);
}

double
fast_food_billions(int year)
{

    int t;
    double charge;
    t = year - 2005;
    charge  = 33.2 +16.8*t;
    return charge;
}
