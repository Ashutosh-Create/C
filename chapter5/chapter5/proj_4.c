#include <stdio.h>
#include <math.h>

int
main(void)
{
	int n;			/* Number of numbers */
	int i, num;		/* Current value */
	int max, min;		/* Maximum and minimum values */
	int sum, sum_sq;	/* Sum and sum of squares of numbers */
	double average;		/* Average value */
	double std_dev;		/* Standard deviation of data collection */

	/* Get the number of elements in data collection */
	printf("Enter the number of numbers: ");
	scanf("%d", &n);

	/* Get the first number */
	printf("Enter number: ");
	scanf("%d", &num);

	/* Initialize maximum, minimum, sum and square sum values using the
	first number */
	max = num;
	min = num;
	sum = num;
	sum_sq = num * num;

	/* Get the rest of the numbers */
	for (i = 1; i < n; i++) {
		printf("Enter number: ");
		scanf("%d", &num);

		/* Update the maximum value if current number is larger */
		if (num > max) {
			max = num;
		}

		/* Update the minimum value if current number is smaller */
		if (num < min) {
			min = num;
		}

		/* Add current number to sum and square sum */
		sum += num;
		sum_sq += num * num;
	}

	/* Calculate average */
	average = sum / (double) n;

	/* Calculate standard deviation */
	std_dev = sqrt((sum_sq / (double) n) - (average * average));

	/* Display range of values, average and standard deviation */
	printf("Smallest value is %d\n", min);
	printf("Largest value is %d\n", max);
	printf("Average value is %.3f\n", average);
	printf("Range of values if from %d to %d\n", min, max);
	printf("Standard deviation is %.3f\n", std_dev);

	return (0);
}
