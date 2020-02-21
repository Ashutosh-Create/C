
#include<stdio.h>

int
main(void)
{
	char color;

	printf("enter the initial of the color to know the contents of the gas cylinder ");
	scanf("%c",&color);

	switch(color)
	{
		case 'o':
		case 'O':
			printf("Cylinder has ammonia");
			break;
		case 'b':
		case 'B':
			printf("cylinder has carbon monoxide");
			break;
		case 'y':
		case 'Y':
			printf("cylinder has hydrogen");
			break;
		case 'g':
		case 'G':
			printf(" cylinder has oxygen");
			break;
		default:
			printf("contents unknown");
	}
}


