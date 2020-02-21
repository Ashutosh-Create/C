#include<stdio.h>
#include<math.h>

int
main(void)
{
	int i =0;
	while(i<=6)
	{
		printf("%d",i);
		printf("  %d\n",(int)pow(2,i));
		i++;
	}

}

