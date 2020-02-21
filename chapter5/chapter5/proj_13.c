#include<stdio.h>

int
main (void)
{
    char c = ' ';
    int n;
    double hit = 0,atbat =0,avg;

    while (scanf("%d",&n)!= EOF)
    {
        scanf("%c",&c);
        printf("player %d's record : ",n);
        while(c!='\n')
        {

            scanf("%c",&c);
            printf("%c",c);
            if (c == 'H')
                hit =hit +1;

            if (c =='H'||c == 'O')
                atbat = atbat +1;
        }
        avg = hit/atbat;
        printf("Player %d's batting average: %2.3f\n",n,avg);
        hit = 0;
        atbat =0;
    }
    return(0);
}
