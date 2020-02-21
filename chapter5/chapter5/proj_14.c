#include<stdio.h>
#include<math.h>
#define c 0.5007 //e^-0.693
#define halflife 5.272

int
main(void)
{

    int year;
    double i_amt,f_amt;
    printf("enter initial amount : ");
    scanf("%lf",&i_amt);

    for(year = 1;year<=5;year++)
    {
        f_amt = i_amt*pow(c,year/halflife);
        printf("amount left after year %d is %.2f\n",year,f_amt);

    }
    return(0);

}
