#include <stdio.h>

main(void)

{

	    int fahrenheit;
		 double celcius;

			  printf("enter temperature in fahrenheit");
				scanf("%d",&fahrenheit);

		   celcius =(5.0/9.0)*(double)(fahrenheit-32);

         printf("temperature in celcius is %lf DEGREE \n",celcius);
}


