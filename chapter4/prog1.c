#include <stdio.h>

int
main(void)
{
	int n,   //input number how many
		tot;//total output
  double avg;

	printf("enter how many numbers > ");
	scanf("%d",&n);

	if (n>0)
	
		tot = (n*(n+1))/2;
	else
		printf("invalid number!!");

	avg = tot/n;
	printf("average = %.2f\n",avg);
}

