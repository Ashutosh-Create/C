/*a program to display each digit, starting with the rightmost digit.
Your program should also determine whether or not the number is divisible by 9.*/

#include<stdio.h>

int 
main(void)

{
 int n,  //input number
     d,   // digit extract
     sum;  //calculate sum
      
      sum =0;

     printf("enter the number >  ");
     scanf ("%d",&n);

     while (n!=0)
     {
       d = n%10;
       sum +=d;
        printf("%d\n",d);
	n =n/10;
    }

    if (sum %9 == 0)
      printf(" The number is divisible by 9 . ");

   else
     printf(" The number is not divisible by 9 . ");

     return(0);
     
}


