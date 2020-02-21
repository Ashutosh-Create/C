#include <stdio.h>
# define pi 3.14
int
main(void)
{
	double area,   //output area
		   side, //input side of square
		   radius; //input radius of circle
	char c;
	printf("Enter  'S' for area of square...\n        Or       \nEnter 'C' for area of circle\nEnter your choice :");
	scanf("%c",&c);

	if (c =='S')  //area for square
	{
		printf("enter the side of square >");
		scanf("%lf",&side);

		area = side*side;
		printf("area of square = %.2f\n",area);
	}

	if (c =='C') //area for circle
	{
		 printf("enter the radius of circle >");
		 scanf("%lf",&radius);
		
		 area = pi*radius*radius;
	     printf("area of circle = %.2f\n",area);
	}
	if (c!='S'&&c!='C') // error messages
		printf("enter the character as given in the instructions\n");
     
	return(0);

}

