/*To calculate the house cost, add the initial cost to the fuel cost for five years,
 * then add the taxes for five years.*/

# include <stdio.h>
# define time 5
 double Calc(int i,int f,double t);
void instructions1();
void instructions2();
void instructions3();

int

main(void)
{
	int i,f;   // input vaiables
	double t;      // input variables

	instructions1();
    scanf("%d%d%lf",&i,&f,&t);
	 printf("Total Cost = %.2lf\n",Calc(i,f,t));

	  instructions2();
	  scanf("%d%d%lf",&i,&f,&t);
	 printf("Total Cost = %.2lf\n",Calc(i,f,t));

     instructions3();
     scanf("%d%d%lf",&i,&f,&t);
	 printf("Total Cost = %.2lf\n",Calc(i,f,t));
}
void
instructions1()
{

    printf("enter the initial cost of first house \n");
	printf("enter the fuel  cost of first house\n");
	printf("enter the tax rate of first house\n");
	printf("enter space-bar to separate different values>>\n ");
	printf("you have to enter only 3 values\npress enter after entering the values  ");
}
void instructions2()
{
    printf("enter the initial cost of second house \n");
	printf("enter the fuel  cost of second house\n");
	printf("enter the tax rate of second house\n");
	printf("enter space-bar to separate different values>>\n ");
	printf("you have to enter only 3 values\npress enter after entering the values  ");
}

void instructions3()
{
    printf("enter the initial cost of third house \n");
	printf("enter the fuel  cost of third house\n");
	printf("enter the tax rate of third house\n");
	printf("enter space-bar to separate different values>>\n ");
	printf("you have to enter only 3 values\npress enter after entering the values  ");
}
double Calc(int i,int f,double t)
{
	double cost=i+time*f+time*t*i;
	return cost;
}
