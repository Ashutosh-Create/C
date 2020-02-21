/*R.W.GOSPER method for factorial calculation */
#include <stdio.h>       // printf ,scanf definations
#include <math.h>       // math function definations
# define pi 3.14159265
double gosper(int n);     // calculates factorial

int 
main(void)

{
   int i;  // integer number input 

   printf(" enter the integer >0 = ");
   scanf("%d",&i);

   printf("%d! equals approximately %.5lf\n",i,gosper(i));

}

double
gosper(int n)
{
	double f,x,a;  // calculation variables - output 
    /* calculations*/

	x=  sqrt(((2*n)+(1.0/3.0))*pi);
	a =x * exp(-n);
	f = a * pow(n,n);
    
	return(f);
 }

