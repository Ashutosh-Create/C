#include<stdio.h>

int
main (void)
{
    int i;
    double s,a;
    s=0.0;

    for (i = 0; i<50 ; i++)
    {
        if(i%2==0)
            s = s+ 1/(double)(2*i+1);
        else
            s = s- 1/(double)(2*i+1);

    }
    a = 4*s;
    printf("%f\n",a);
    return(0);

}
