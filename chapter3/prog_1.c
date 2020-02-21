/*
 * * Compute the sum and average of two numbers.
 * */

# include <stdio.h> /* printf, scanf definitions */
int 
main(void)

{
	double one, two, /* input - numbers to process*/
		   sum,    /* sum of 2 no.*/
		   average; /* average of 2 no.*/
	/* get 2 numbers*/

	printf("enter two numbers > ");
	scanf("%lf%lf",&one,&two);

	/* compute sum of 2 no.*/
	sum = one + two;

	/* Compute average of numbers. */
	average = sum /2.0;

	/*display sum and avg .*/

	printf("sum     = %.2f\naverage = %.2f \n",sum,average);


}	





