#include <stdio.h>

main(void)

{
   int no_of_gallons;
   double btu;
   
   printf("enter no of gallons>>");
   scanf("%d",&no_of_gallons);

   btu = (5800000.0/42.0)*no_of_gallons;
    printf("BTUs of heat are delivered to a	house is %.0lf \n",btu);
	printf("the efficiency of the house’s oil furnace is %lf ",(0.65*btu));

}
