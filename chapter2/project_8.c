#include <stdio.h>
#define avgf 15
#define avgt 14
#define new 2
main(void)

{
	int tot_pop,dailyuse_old,dailyuse_new ,water_saved ;

	printf("enter total population");
	scanf("%d",&tot_pop);

	dailyuse_old = avgf*avgt;
    dailyuse_new = new*avgt;

	water_saved = (dailyuse_old - dailyuse_new)*(tot_pop/3);

	printf("water saved = %d litres/day\n",water_saved);

}

