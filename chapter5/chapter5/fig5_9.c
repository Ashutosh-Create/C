/*
 * * Monitor gasoline supply in storage tank. Issue warning when supply
 * * falls below MIN_PCT % of tank capacity.
 * */
#include <stdio.h>

/* constant macro */
#define CAPACITY 80000.0
#define MIN_PCT 10
#define GALS_PER_BRL 42.0

/* FUNCTION PROTOTYPE*/
double monitor_gas(double min_supply,double start_supply);

int
main(void)
{
	double start_supply,  //input - initial supply in barrel
		   min_supply, //minimum number of barrels left without warning
		   current;  //output - current supply in barrels
/* Compute minimum supply without warning */
	min_supply = MIN_PCT / 100.0 * CAPACITY;
	/* Get initial supply */
	printf("Number of barrels currently in tank> ");
	scanf("%lf", &start_supply);

	/* Subtract amounts removed and display amount remaining
	 * as long as minimum supply remains.*/
	current = monitor_gas(min_supply,start_supply);
	/* Issue warning*/
	 printf("only %.2f barrels are left.\n\n", current);
	 printf("*** WARNING ***\n");
	 printf("available supply is less than %d percent of tank's\n",MIN_PCT);
	 printf("%.2f -barrel capacity.\n",CAPACITY);
	 return(0);
}
/*
 * * Computes and displays amount of gas remaining after each delivery
 * * Pre : min_supply and start_supply are defined.
 * * Post: Returns the supply available (in barrels) after all permitted
 * *
 * removals. The value returned is the first supply amount that is
 * *
 * less than min_supply.
 * */
double
monitor_gas(double min_supply, double start_supply)
{
	double remov_gals,   //input - amount of current delivery 
		   remov_brls,   //in barrales and gallons
		   current;     //output - current supply in barrales
	for(current = start_supply;current >= min_supply;current -= remov_brls)
		{
			printf("%.2f barrels are available.\n\n", current);
			printf("Enter number of gallons removed> ");
			scanf("%lf", &remov_gals);
			remov_brls = remov_gals / GALS_PER_BRL;
			printf("After removal of %.2f gallons (%.2f barrels),\n",
					remov_gals, remov_brls);
		}
	return (current);
}
