#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define error 1E-6
#define max 100

double f1(double x,int n,int c);
double f2(double x,int n );

int
main (void)
{
    int n,c,i;
    double x,prev;

    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the values of c : ");
    scanf("%d",&c);

    x = c/2;
    prev = 0;
    i =0;

    while (fabs(x-prev)>error && i< max)
    {
        prev =x;
        x =x- f1(x,n,c)/f2(x,n);
        i++;

    }
    printf("nth root of c = %f\n",x);
}

double f1(double x,int n ,int c)
{

    return pow(x,n)-c;
}
double f2(double x ,int n)
{
    return n*pow(x,n-1);
}
