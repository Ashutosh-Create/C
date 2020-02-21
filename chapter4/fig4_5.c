/*
 * * Displays message about heart rate.
 * */
#include <stdio.h>
int 

main(void)
{
	int pulse;/* resting pulse rate for 10 secs */
	int rest_heart_rate;/* resting heart rate for 1 minute */
	/* Enter your resting pulse rate */
	printf("Take your resting pulse for 10 seconds.\n");
	printf("Enter your pulse rate and press return> ");
	scanf("%d", &pulse);

	/*calculate resting heart rate for minute*/
	rest_heart_rate = pulse *6;
	printf("Your resting heart rate is %d.\n", rest_heart_rate);

	/*Display message based on resting heart rate */

	if (rest_heart_rate >56)
		printf("keep up your exercise program!\n");
	else 
		printf("your heart is in excellent health!\n");
	return(0);
}

