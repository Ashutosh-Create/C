/*
 *  * * Demonstrates the use of a function with input and output parameters.
 *   * */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void separate(double num, char *signp, int *wholep, double *fracp);

int
main(void)
{
	    double value; //input - no. to analyze
		    char sn;     //o/p  - sign of value
			    int whl;     //o/p - whole no. magnitude of value
				    double fr;    // o/p - fractional part of value

					    //get data
						    printf("enter a value to analyze > ");
						        scanf("%lf",&value);
						
				          // separate daata value int0o three parts

		separate(value,&sn,&whl,&fr);

    // print results
	      printf("parts of %.4f\n sign: %c\n",value,sn);
	           printf("whole number magnitude: %d\n",whl);
	                printf("fractional part: %.4f\n",fr);
	
	                     return(0);
	                    
}


void separate(double num, char *signp, int *wholep, double *fracp);
{
	double magnitude;
	if (num < 0)
		*signp = '-';
	else if (num == 0)
		*signp = ' ';
	else
		*signp = '+';
	magnitude = fabs(num);
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;
	
}



	                     		
