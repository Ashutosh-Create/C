#include <stdio.h>

int leapyear(int yy);

int

main(void)
{
	int dd,mm,yy,l,nd;

	printf("enter the date as dd mm yy format > ");
	scanf("%d%d%d",&dd,&mm,&yy);
     nd =dd;


   switch(mm)
   {
	   case 12 :
		   nd += 30;
      case 11 :
		   nd +=31;
	  case 10:
		   nd +=30;
	  case 9 :
		   nd +=31;
	  case 8:
		   nd += 30;
	  case 7:
		   nd +=31;
	  case 6:
		   nd+=31;
	  case 5:
			   nd+=30;
	  case 4:
			  nd+=31;
	  case 3:
			  if (leapyear(yy))
			  nd+=29;
			  else
				  nd+=28;
	  case 2:
			  nd+=31;
      case 1:
			  nd+=0;
			  break;
	  default : printf("wrong choice");
   }


   printf("day number = %d ",nd);



}

int
leapyear(int yy)
{
	  if(yy % 4 == 0)
	  {
		  if(yy %100 ==0)
		  {
			  if (yy%400==0)
				  return 1;
			  else
				  return 0;
		  }
		  else
			  return 1;
	  }
	  else
		  return 0;
}

