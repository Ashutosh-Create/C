/*
 * * Compute the sum of the list of exam scores stored in the
 * * file scores.dat
 * */
#include <stdio.h>
int
main(void)
{
	int sum = 0,
		score,
		input_status;
     printf("Scores\n");
	 input_status = scanf("%d", &score);
	 while (input_status != EOF) {
		 printf("%5d\n", score);
		 sum += score;
		 input_status = scanf("%d", &score);
	 }
	 printf("\nSum of exam scores is %d\n", sum);
	 return (0);
}
