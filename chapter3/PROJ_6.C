/* displays the speed in feet per second ( fps ) and
in meters per second ( mps ).*/

#include <stdio.h>

double fps(int m,double s);  //feet per second function
double mps(int m1,double s1); // meters per second function

int

main(void)
{
	double sec1,sec2,sec3,sec4; // time input in seconds
	int min1,min2,min3,min4;    // time input in minutes

	printf("enter the time in minutes andseconds for runner 1 > ");
	scanf("%d%lf",&min1,&sec1);

	printf("the speed in feet per second is > %.2f\n",fps(min1,sec1));
    printf("the speed in meter per sec is %f\n", mps(min1,sec1));

	printf("enter the time in minutes andseconds for runner 2 > ");
	scanf("%d%lf",&min2,&sec2);

    printf("the speed in feet per second is > %.2f\n",fps(min2,sec2));
    printf("the speed in meter per sec is %f\n", mps(min2,sec2));

	printf("enter the time in minutes andseconds for runner 3 > ");
	scanf("%d%lf",&min3,&sec3);

	printf("the speed in feet per second is > %.2f\n",fps(min3,sec3));
    printf("the speed in meter per sec is %f\n", mps(min3,sec3));

	printf("enter the time in minutes and seconds for runner 4 > ");
	scanf("%d%lf",&min4,&sec4);

   	printf("the speed in feet per second is > %.2f\n",fps(min4,sec4));
    printf("the speed in meter per sec is %f\n", mps(min4,sec4));

	return(0);
}
/* calculating feet per second */
double
fps(int m,double s)
{
   double tt,f;
   	tt=(m*60)+s;
	f=5280/tt;

	return(f);
}
/* calculating meter per secind*/
double mps(int m1,double s1)
{
	double tt, dis,ms;
	tt=(m1*60)+s1;
	dis=(1000*5280)/3282;
	ms=dis/tt;

	return(ms);
}











