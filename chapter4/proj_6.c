#include<stdio.h>

int

main(void)

{

	    double x1,x2;  // x and y co-ordinates of the point



      printf("enter the x and y coordinates of the point ");

	   scanf("%lf%lf",&x1,&x2);
// check the condition .....
	  if (x1>0 &&x2>0)
	    printf("(%.1lf,%.1lf) lies in Quadrant I\n",x1,x2);

     else if (x1<0 &&x2>0)
      
		 printf("(%.1lf,%.1lf) lies in Quadrant II\n",x1,x2);

	  else if (x1<0 &&x2<0)
		  printf("(%.1lf,%.1lf) lies in Quadrant III\n",x1,x2);

	  else if (x1>0 &&x2<0)

		  printf("(%.1lf,%.1lf) lies in Quadrant IV\n",x1,x2);

	  else if(x2 == 0 )
		  printf("(%.1lf,%.1lf) is on the  x - axis\n",x1,x2);
     else if(x1 == 0 )
		 printf("(%.1lf,%.1lf) is on the  y - axis\n",x1,x2);
	  else if(x1==0&&x2==0)
		  printf("(%.1lf,%.1lf) is on the  origin\n",x1,x2);
}
