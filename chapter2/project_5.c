#include <stdio.h>

main(void)

{

    double volume ;
   int	minutes ;
    
	  printf("enter the volume to be infused>>");
 	 scanf("%lf",&volume);
 
 	 printf ("enter the minutes over which to infuse>>");
  		scanf("%d",&minutes);

	   printf("VTBI: %4.0lf ml\n",volume);
	   printf("Rate: %4.0lf ml/hr\n", ((double)volume/minutes)*60);

}


