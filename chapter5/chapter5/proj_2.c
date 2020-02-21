/* program to display each digit and sum using char */

#include <stdio.h>

int 
main(void)
{
   char digit;   // input digit
   int sum,     // calculate sum
       n, d;     //digit extract
      
   printf("enter the number of digits >  ");
   scanf("%d",&d);
   sum =0;
   while (d > 0)
   { 
     printf("enter the digit of number");
     scanf(" %c",&digit);
      n = (int)digit - (int)'0';
          
     sum +=n;
     d = d-1;
   }
   
   if (sum % 9 ==0)
   printf(" the no is divisible by 9.\n");

  else 
   printf("the number is not divisible by 9");

return (0);

}
   

