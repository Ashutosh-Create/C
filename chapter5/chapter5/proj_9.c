#include<stdio.h>

int
main (void)

{
    int inv1 ,inv2,inv3 ,inv4 ,amount ,code;

    printf(" BEER BRAND ID's \n");
    printf("1. Piels\n2. Coors\n3.Bud\n4. Iron City\n");

    printf("inventory  at beginning of the week \n");
    printf("1. Piels: ");
    scanf("%d",&inv1);
    printf("2. Coors: ");
    scanf("%d",&inv2);
    printf("3. Bud: ");
    scanf("%d",&inv3);
    printf("4. Iron City: ");
    scanf("%d",&inv4);

    while(code!= -1)
    {
        printf("id : ");
        scanf("%d",&code);
        printf("amount requested or subtracted: ");
        scanf("%d",&amount);

        if(code == 1)
            inv1 += amount;
        else if(code ==2)
            inv2 += amount;
        else if(code ==3)
            inv3 += amount;
        else if(code ==4)
            inv4 += amount;
        else (code ==-1);
          {
                break;
           }
            printf ("End of week for Piels:  %d\n", inv1);
            printf ("End of week for Coors:  %d\n", inv2);
            printf ("End of week for Bud:  %d\n", inv3);
            printf ("End of week for Iron City: %d\n", inv4);
    }
    return(0);
}
