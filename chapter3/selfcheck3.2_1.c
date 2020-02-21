
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
int 

main(void)

{
   double u,v,w,x,y,z,   // input values
	      a,b,c;	   // storing answers - output
   int d;             // output of absolute func() 

   printf("enter u,v,w,x,y,z");
   scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&x,&y,&z);   

   /* calculations */
  a = sqrt(u+v) * pow(w,2); 
  b = log(pow(x,y));
  c = sqrt(pow((x-y),3)) ;
  d = abs((int)x*(int)y - (int)w/(int)z);

   printf("a =%.2f\nb =%.2f\nc =%.2f\nd =%d\n",a,b,c,d);

   return(0);

}

    
    
