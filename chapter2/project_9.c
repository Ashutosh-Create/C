#include <stdio.h>

main(void)

{

   double len_yard ,wid_yard,len_h,wid_h ,a1,a2,diff;

   printf("enter length and width of yard>>");
   scanf("%f %f",&len_yard,&wid_yard);

   printf("enter length and width of house>>");
      scanf("%f %f",&len_h,&wid_h);

	  a1 = len_yard *wid_yard;
	  a2 = len_h*wid_h;
      diff = a1-a2;

	  printf("the time required to cut grass is %.2f seconds \n",(diff*0.5));

}




