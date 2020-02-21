/* rounding  off numbers */

#include <stdio.h>

double roundoff (double n);

int
main(void)

{

	    double i;  //input number

		printf("enter the decimal number  ");
        scanf("%lf",&i);

        printf("%.4f rounds to %.2f .",i,roundoff(i));


        return(0);
}

double
roundoff (double n)    //rounding function

{
	double a; // decimal calculation variable
    int x; // output variable

		    /* calculations*/

		  a = (n+ 0.005)*100;
		  x = (int) a;

		  return(x/100.0);
}
