// ccalculates the user’s body mass index (BMI) and categorizes it as underweight, normal, overweight, or obese,
#include<stdio.h>

double bmi(double wt_lb,double ht_in);

int
main(void)
{
	double wt_lb,
		   ht_in,
		   index;
            
	printf("enter the weight in pounds > ");
	scanf("%lf",&wt_lb);

    printf("enter the height in inches > ");
    scanf("%lf",&ht_in);
 
	index = bmi(wt_lb,ht_in);
	
	if(index<18.5)
		printf("underweight\n");
	else if(index <25.0)
        printf("normal\n");
	else if (index <30.0)
		 printf("overweight\n");
	else
		 printf("obese\n");
}

double
bmi(double wt_lb,double ht_in)
{
	double b_m_i;
	b_m_i = (703*wt_lb)/(ht_in*ht_in);
	return b_m_i;
}




