# include <stdio.h>

int 
main(void)
{
	int p_no,odo_reading;
	double grass_emitted;

	printf("(1) Carbon monoxide\n(2) Hydrocarbons\n(3) Nitrogen oxides\n(4) Nonmethane hydrocarbons\nEnter pollutant number");
	scanf("%d",&p_no);

	printf("enter number of grams emitted per mile>> ");
	scanf("%lf",&grass_emitted);

	printf("enter odometer reading >> ");
	scanf("%d",&odo_reading);

	switch(p_no)
	{
     case 1 : 
		 
		 if (odo_reading <=50000 && grass_emitted > 3.4)
		 printf("emission exceed permitted level of 3.4 gram/mile\n");
		 else
			 printf("emission exceed permitted level of 4.2 gram/mile\n");
		 break;
	 
	 case 2:
		  if (odo_reading <=50000 && grass_emitted > 0.31)
		           printf("emission exceed permitted level of 0.31 gram/mile\n");
		 else
			 printf("emission exceed permitted level of 0.39 gram/mile\n");
       break;
	 
	 case 3: 
	    if (odo_reading <=50000 && grass_emitted > 0.4)
		         printf("emission exceed permitted level of 0.4 gram/mile\n");
      else
        	printf("emission exceed permitted level of 0.5 gram/miles\n");
	  break;
	 
	 case 4:
	   if (odo_reading <=50000 && grass_emitted > 3.4)
	            printf("emission exceed permitted level of 0.25 gram/mile\n");
       else
		 printf("emission exceed permitted level of 0.31 gram/mile\n");
	  break;
	}
}



