/*adds, subtracts, multiplies and divides common fractions, displaying  results in reduced form.*/

#include<stdio.h>
#include<stdlib.h>

void scan_fraction(int *nump ,int*denomp);
char get_operator(void);
void add_fractions(int n1, int d1, int n2, int d2,int *n_ansp, int *d_ansp);
void multiply_fractions(int n1, int d1, int n2, int d2,int *n_ansp, int *d_ansp);
int find_gcd(int n1,int n2);
void reduce_fraction(int *nump,int *denomp) ;
void print_fraction(int num, int denom);

int
main(void)
{
	int n1, d1;    //* numerator, denominator of first fraction
	int n2,d2;     //numerator, denominator of second fraction
	char op;      //arithmetic operator
	char again;   //y or n depending on users desire
	int n_ans, d_ans ;// numerator and denominatorof answer

	/* while user wants to continue ,gets and solve arithmetic*/
	do {
		/* Gets a fraction problem*/
		  scan_fraction(&n1, &d1);
		  op = get_operator();
		  scan_fraction(&n2, &d2);
		  /* Computes the result */
		  switch (op)
		  {
			  case '+':
				  add_fractions(n1, d1, n2, d2, &n_ans, &d_ans);
				  break;
			  case '-':
				  add_fractions(n1, d1, -n2, d2, &n_ans, &d_ans);
				  break;
			  case '*':
				  multiply_fractions(n1, d1, n2, d2, &n_ans, &d_ans);
				  break;
			  case '/':
				  multiply_fractions(n1, d1, d2, n2, &n_ans, &d_ans);
		  }
		  reduce_fraction(&n_ans, &d_ans);
		  /* Displays problem and result*/
		   printf("\n");
		   print_fraction(n1, d1);
		   printf(" %c ", op);
		   print_fraction(n2, d2);
		   printf(" = ");
		   print_fraction(n_ans, d_ans);
		   /* Asks user about doing another problem*/
		    printf("\nDo another problem? (y/n)> ");
			 scanf(" %c", &again);
			 } while (again == 'y' || again == 'Y');
			 
	return (0);
}

//insert function scan_fraction
/* Gets and returns a valid arithmetic operator. Skips over newline characters and permits reentry of operator in case of error.*/

char
get_operator(void)
{
	char op;
	printf("Enter an arithmetic operator (+,-,*, or /)\n> ");
	for (scanf("%c", &op);op != '+' && op != '-' &&op != '*' && op != '/';scanf("%c", &op)) 
	{
		if (op != '\n')
			printf("%c invalid, reenter operator (+,-, *,/)\n> ", op);
	}
	return (op);
}

/*
 * * Adds fractions represented by pairs of integers.
 * * Pre: n1, d1, n2, d2 are defined;
 * *
 * n_ansp and d_ansp are addresses of type int variables.
 * * Post: sum of n1/d1 and n2/d2 is stored in variables pointed
 * *
 * to by n_ansp and d_ansp. Result is not reduced.
 * */

void
add_fractions(int n1,int d1,int n2,int d2,int *n_ansp,int *d_ansp)
{
	int denom, //common denominator
		numer, //numerator of sum
		sign_factor; //-1 for a negative ,1 otherwise 
	   
	denom = d1*d2;
	numer = n1*d2+n2*d1;

	if(numer*denom >=0)
		sign_factor = 1;
	else
		sign_factor = -1;
	numer = sign_factor * abs(numer);
	denom = abs(denom);
	/* Returns result*/
	 *n_ansp = numer;
	 *d_ansp = denom;
}
/*
 * ***** STUB *****
 * * Multiplies fractions represented by pairs of integers.
 * * Pre: n1, d1, n2, d2 are defined;
 * *
 * n_ansp and d_ansp are addresses of type int variables.
 * * Post: product of n1/d1 and n2/d2 is stored in variables pointed
 * *
 * to by n_ansp and d_ansp. Result is not reduced.
 * */

void
multiply_fractions(int n1,int d1 ,int n2, int d2,int *n_ansp,int *d_ansp)
{
   printf("\nEntering multiply_fractions with\n");
   printf("n1 = %d, d1 = %d, n2 = %d, d2 = %d\n", n1, d1, n2, d2);

   *n_ansp = 1;
   *d_ansp = 1;
}
/*
* ***** STUB *****
* * Finds greatest common divisor of two integers
* */

int
find_gcd (int n1, int n2)
{
	int gcd;
	printf("\nEntering find_gcd with n1 = %d, n2 = %d\n", n1, n2);
	printf("gcd of %d and %d?> ", n1, n2);
	scanf("%d", &gcd);
	printf("find_gcd returning %d\n", gcd);
	return (gcd); 
}
/*
 * * Reduces a fraction by dividing its numerator and denominator by their
 * * greatest common divisor.
 * */

void
reduce_fraction(int *nump, int *denomp)
{
	int gcd;
	gcd = find_gcd(*nump, *denomp);
	*nump = *nump / gcd;
	*denomp = *denomp / gcd;
}
/*
 * * Displays pair of integers as a fraction.
 * */
void
print_fraction(int num, int denom)
{
	printf("%d/%d", num, denom);
}
/*
 * * Gets and returns a valid fraction as its result
 * * A valid fraction is of this form: integer/positive integer
 * * Pre : none
 * */
void
scan_fraction(int *nump, int *denomp)
{
	char slash;
	int status;
	int error;
	char discard;

	do
	{
		error = 0;

		printf("Enter a common fraction as two integers separated ");
		printf("by a slash> ");
		status = scanf("%d %c%d",nump,&slash,denomp );

		/* Validate the fraction*/
		 if (status < 3)
		 {
		  error = 1;
		  printf("Invalid-please read directions carefully\n");
		  }
		 else if (slash != '/')
		 {
		  error = 1;
		  printf("Invalid-separate numerator and denominator");
		  printf(" by a slash (/)\n");
		  }
		 else if (*denomp <= 0) 
		 {
		  error = 1;
		  printf("Invalid—denominator must be positive\n");
		 
		 }
		 do 
		 {
			 scanf("%c", &discard);
		 } while (discard != '\n');
	} while (error);
}
