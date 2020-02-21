/* discount calculation*/

#include <stdio.h>
# define sales_tax 0.05
#define discount 0.1
#define spl_discount 0.12

int
main(void)
{
	char purchaser;  //to find purchaser is a teacher or not
	double purchase_total, //total amount of purchase
		   dis, //discount amount
		   dis_total,//amount after discount
		   tax,// tax amount
		   total;//final amount

	printf("enter the total amount of purchase in dollar = $ ");
	scanf("%lf",&purchase_total);
    
	printf("enter 'Y'/'y' if the purchaser is a teacher else  enter 'N'/'n' ");
	scanf(" %c",&purchaser);

	if (purchaser =='y'||purchaser=='Y')
	{
		 printf("Total Purchases               $%6.2f\n",purchase_total);
		if(purchase_total >=100.0)
		{
			dis= spl_discount * purchase_total;
			printf("Teacher's discount (12%%)       %6.2f\n",dis);
		}
		else
		{
			dis = discount * purchase_total;
			printf("Teacher's discount (10%%)       %6.2f\n",dis);
		}

		dis_total = purchase_total - dis;
		tax = sales_tax * dis_total;
	    total = dis_total + tax;
       
		printf("Discounted total               %6.2f\n",dis_total);
		printf("Sales tax (5%%)                 %6.2f\n",tax);
		printf("Total                         $%6.2f\n",total);


	}
	else if (purchaser =='n'||purchaser== 'N')
	{
        printf("Total Purchases                $%6.2f\n",purchase_total);
	
		tax = sales_tax * purchase_total;
	    total = dis_total + tax;
		printf("Sales tax (5%%)                  %6.2f\n",tax);
		printf("Total                          $%6.2f\n",total);

	}
	else 
		printf("pleas enter 'y' and 'n' only");

       return (0);	
}




    
