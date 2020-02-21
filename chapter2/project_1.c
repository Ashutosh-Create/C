# include <stdio.h>
# define rate 0.35

int 
main (void)
{
   
  double start,end,total,tr ;
      
    printf("MILEAGE REIMBURSEMENT CALCULATOR \n");
   
   	printf ("Enter beginning odometer reading=>  ");
    scanf("%lf",&start);
   
   	printf("Enter ending odometer reading=>  ");
    scanf("%lf", &end);
    
	total = end - start;

	printf("You traveled %3.1f miles.\t ",total);

	printf ("At $0.35 per mile,\n");

	tr = total *rate;	
	printf("your reimbursement is $ %3.2f \n ." ,tr);

     	return(0);
}

