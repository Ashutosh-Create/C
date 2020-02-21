/*program should display with labels all the input data, the pretax bill and average minute cost, the taxes, and the total bill. Store all monetary values as whole cents*/

#include<stdio.h>
#include<math.h>
#define cost 0.40
#define rate 5.25
#define flat_rate 39.99
#define min_offered 600

double compbill(double min_used);


int 
main(void)
{
	double weekday_min,   //weekday minutes input
		   night_min,     //night minutes input
		   weekend_min,  //weekend minutes input
           charge,       //calculate charge
		   tax,          //calculate tax
		   average_min_cost, //calculate average min cost
           total_min_used,
		   bill,
		   totalbill;
	       

		   printf("enter the weekday minutes> ");
           scanf("%lf",&weekday_min);

		   printf("enter the night minutes (8 pm to 7am)> ");
		   scanf("%lf",&night_min);

		   printf("enter the weekend minutes> ");
		   scanf("%lf",&weekend_min);

		   total_min_used = weekday_min + weekend_min + night_min ;
           bill =  compbill(total_min_used);
 
		   printf("Pretax bill\n");
		   printf("Monthly bill before taxes = %.0lf\n ",round(bill));
		   printf("average min cost = %.0lf\n",round((total_min_used/60.0)));
           
		   tax = bill*rate;
		   printf("taxes = %.0lf\n",round(tax));

		   totalbill = bill + tax;
		   printf("total bill = %.0lf\n",round(totalbill));

}

double
compbill(double min_used)
{
	double bill,extracharge;

	if (min_used > min_offered)
	{
		extracharge = ( min_used - min_offered)*cost;
	    bill = extracharge + flat_rate;
		
	}
	else
		bill =min_used *cost;
	return (bill);
}




