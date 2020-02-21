/* compute the payroll for a company */

#include<stdio.h>

int
main(void)
{
	double total_pay; //company payroll
	int count_emp,    //current employee
		number_emp;  //no of employees
	double hours,    // hours work
		   rate,   //hourly rate
		   pay;  // pay for this period

	/*get no of employees*/
	printf("enter number of employees> ");
	scanf("%d",&number_emp);

	/* compute each employee pay  and it to payrol*/
	total_pay = 0.0;
	count_emp = 0;
	while (count_emp < number_emp) 
	{
		printf("Hours> ");
		scanf("%lf", &hours);
		printf("Rate > $");
		scanf("%lf", &rate);
		pay = hours * rate;
		printf("Pay is $%6.2f\n\n", pay);
		total_pay = total_pay + pay;
		count_emp = count_emp+1;
	}
	printf("all employees processed\n");
	printf("total payroll is $ %8.2f\n",total_pay);

	return(0);
}

