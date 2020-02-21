#include<stdio.h>
#define SUBSIDY 0.08
#define SENTINEL 0

int
main(void)
{
    int min_efficiency,
        passengers,
        distance;
    double gasoline,
           efficiency,
           subsidy;

     scanf("%d",&min_efficiency);

     printf("CARPOOLS MEETING MINIMUM PASSENGER EFFICIENCY OF ");
     printf("%d PASSENGERS KM/L\n", min_efficiency);
	printf("Passengers\tWeekly Commute (km)\tGasoline Consumption(L) ");
	printf("Efficiency (pass km/L)\tWeekly Subsidy($)\n");
	scanf("%d %d %lf", &passengers, &distance, &gasoline);
	while (passengers != SENTINEL)
        {
		/* Calculate efficiency */
		efficiency = (passengers * distance) / gasoline;

		/* Calculate subsidy according to efficiency */
		if (efficiency >= min_efficiency)
        {
			subsidy = SUBSIDY * distance * passengers;

			/* Display calculated data */
			printf("%d\t%d\t%.1f\t%.1f\t%.2f\n", passengers,
				distance, gasoline, efficiency, subsidy);
		}

		/* Get the next line from input file */
		scanf("%d %d %lf", &passengers, &distance, &gasoline);
	}

	return (0);


}
