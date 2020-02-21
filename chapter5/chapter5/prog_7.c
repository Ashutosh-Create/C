#include<stdio.h>

int
main(void)
{
   int temp ,   //input temoperatures
        hot,     // count no. of hot days
        pleasant,  //count number of pleasant days
        cold,      // count no. of cold days
        sum;       // calculate sum

   double avg;   //calculate average

   hot =0;
   pleasant =0;
   cold =0;
   sum =0;

   do
   {
       printf("enter the temperature and enter -99 when finished >>");
       scanf("%d",&temp);

       if (temp == -99)
        break;

       if (temp>=85)
        hot++;
       if (60< temp <= 84)
        pleasant++;
       if (temp<=60)
        cold++;

       sum+= temp;
   }while(temp!=-99);


   avg = sum/(hot +pleasant +cold);
   printf("%d Hot days, %d Pleasant Days and %d Cold Days\n",
        hot,pleasant,cold);

    printf(" Average is> %.2f\n",avg);

    return(0);
}
