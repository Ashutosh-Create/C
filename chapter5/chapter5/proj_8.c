#include<stdio.h>
#define tax 3.625
int
main(void)
{
    int id_no,
         rate,
         hours_work,
         netpay,
         tot_payroll,
         n;
   double avg ;
   char c ='y';
   n = 1;
   while (c =='y')
   {
       printf("enter details of employee %d",n);
       printf("enter the identification number > ");
       scanf("%d",&id_no);
       printf("enter the hourly wage rate > ");
       scanf("%d",&rate);
       printf("enter the number of hours worked > ");
       scanf("%d",&hours_work);


      if (hours_work > 40 )
        netpay = rate*40 + rate *(hours_work - 40)*1.5;
      else
        netpay = rate * tax;
      netpay -= netpay*tax;

      printf("employee id %d  ; netpay =%d\n",id_no,netpay);

      tot_payroll += netpay;
       n++;

      printf("do you want to enter another employee [y/n]");
      scanf(" %c",&c);


   }

   avg = tot_payroll/(double)n;

   printf("total payroll = %d\n",tot_payroll);
   printf("average amount =%.2f\n",avg);


}
