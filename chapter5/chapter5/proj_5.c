#include <stdio.h>
#include <stdlib.h>

int
main(void)
{

    int a ,b,
        r;

    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);

    a = abs(a);
    b = abs(b);

    r = a%b;
    while(r!=0)
    {
        a = b;
        b = r;
        r = a%b;

    }
    printf("gcd is %d\n",b);

}
