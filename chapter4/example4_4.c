
#include <stdio.h>

int
main(void)
{
	int age, //input persons age
	    senior_citizen_status;// indicates senior citizen status

	senior_citizen_status=1;

	printf("enter the age of person");
	scanf("%d",&age);

	senior_citizen_status =(age >= 65);

	printf("senior citizen status = %d\n",senior_citizen_status);

	return (0);
}
