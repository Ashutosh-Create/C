# include <stdio.h>
# define g 9.80


main(void)

{

  int h;
  double vol ,m,w,w1;
  
     printf("Enter the height of dam> ");
     scanf("%d" ,&h);

     printf("Enter the volume in cubic meters> ");
      scanf ("%lf",&vol);

     m = vol*1000;
     
	 w = m*g*h;

	 w1 = 0.90 *w ;

     printf("The final work done on the water is %1.2f",w1);
	 
}

