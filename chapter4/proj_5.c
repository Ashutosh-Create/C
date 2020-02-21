#include<stdio.h>

int
main(void)
{
    double n; //Richter scale number

    printf("enter the Richter scale number ");
    scanf("%lf",&n);

    if (n<5.0)
        printf("little or no damage");
    else if (n<5.5)
        printf("some damage");
    else if (n<6.5)
        printf("Serious damage: walls may crack or fall ");
    else if (n<7.5)
        printf("Disaster: houses and buildings may collapse ");
    else
        printf("Catastrophe: most buildings destroyed");


}
