/* program to control a bread machine */

#include<stdio.h>

void instructions();
int
main(void)
{
	char bread_type,
		 baking,
		 loaf_size;

	instructions();
	scanf("%c%c%c",&bread_type,&baking,&loaf_size);

	 if (bread_type=='W')
		     {
				    printf("White Bread\n");
					printf("Primary kneading: 15 mins\n");
				    printf("Primary rising: 60 mins\n");
					printf("Secondary kneading: 18 mins\n");
					printf("Secondary rising: 20 mins\n");
					printf("Loaf shaping: 2 seconds\n");

					if (baking == 'y'||baking == 'Y')
					{

							printf("Manual baking mode selected\n");
							printf("Remove dough for manual baking\n");
					}

						else
						{
							printf("Final rising: 75 mins\n");

							if(loaf_size =='y' ||loaf_size == 'Y')
								printf("Baking time : 67.5 mins\n");
							else
								printf("Baking time : 45 mins\n");

							printf("Cooling : 30 mins\n");
						}
					}

					else if (bread_type=='S')
                    {
					printf("Sweet Bread\n");
					printf("Primary kneading: 20 mins\n");
					printf("Primary rising: 60 mins\n");
					printf("Secondary kneading: 33 mins\n");
					printf("Secondary rising: 30 mins\n");
					printf("Loaf shaping: 2 seconds\n");

					if (baking == 'y'||baking == 'Y')
				  	{

							  printf("Manual baking mode selected\n");
						      printf("Remove dough for manual baking\n");
					 }

				   	else
						  {
							  printf("Final rising: 75 mins\n");
							 if(loaf_size =='y' ||loaf_size == 'Y')
								  printf("Baking time : 52.5 mins\n");
							 else
							  printf("Baking time : 35 mins\n");

							  printf("Cooling : 30 mins\n");
						  }

					}
					else
                        printf("invalid type!!");



			 }
void
instructions()
{
	printf("Enter bread type, white or sweet [W/S]: ");


	printf("Loaf size double? [y/n]: ");


	printf("Manual baking? [y/n]: ");
    printf("enter space to separate the values:");

}

