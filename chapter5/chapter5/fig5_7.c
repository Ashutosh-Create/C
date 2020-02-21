/*
 * * Computes n!
 * * Pre: n is greater than or equal to zero
 * */
#include <stdio.h>

int
factorial(int n)
{
	int i, //local variable
		product; //compute product

	product = 1;

	for(i = n;i>1;--i)
	{
		product = product *i;
	}

	return(product);
}
int
main(void)
{
	int n;
	printf("enter the number whose factorial is to be found");
	scanf("%d",&n);

	printf("%d! =%d",n,factorial(n));
}


