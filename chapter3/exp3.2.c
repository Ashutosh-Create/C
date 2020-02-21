/*compute the roots of a quad ratic equation in x of the form ax^2 + bx + c = 0  */

# include<stdio.h>
# include <math.h>

int 
main(void)

{
	double a,b,c, //coefficients of quadratioc equation
           disc,  //discriminant
		   root_1,root_2; //compute the roots output.. 
    
	printf("enter the coefficients a,b,c of the quadratic equation > ");
	scanf("%lf%lf%lf",&a,&b,&c);

	/* Compute two roots, root_1 and root_2, for disc > 0.0 */

	disc =  pow(b,2) - 4*a*c ;
	root_1 = (-b +sqrt(disc))/(2*a) ;
	root_2 = (-b -sqrt(disc))/(2*a) ;

	/* print the roots of equation */

	printf("root1 = %.2f\nroot2 = %.2f",root_1,root_2);

}

