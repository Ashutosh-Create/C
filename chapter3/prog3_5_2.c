/* computes the time one must leave in order to reach a
certain destination by a designated time.*/

# include <stdio.h>

double time_start(double t);
double travel_time (double d,double s);
int
main(void)
{
  double t1,t2,speed,distance; //input variables

  printf("enter the speed in km/hr > ");
  scanf("%lf",&speed);

  printf("enter the distance in km >");
  scanf("%lf",&distance);

    t1 = travel_time(distance,speed);
 printf("time required for journey is %.2f hrs.\n",t1);
   t2= time_start(t1);
  printf("start time is %.0f hrs.\n",t2);

   return(0);
   }

 double
 travel_time(double d,double s)
 {
     double t_time;    //calulate travel time
     t_time =d/s;

     return (t_time);


 }

double
time_start(double t)
{
   double a,a2,tf,min,nt;     /*calculation variable for start time*/
    int h ,end_t=2030;
   int m,a1;
//calculations

     h = end_t/100 ;
     m = end_t%100;
     min = m/60.0;
     nt = h+min;
     a = nt -t;
     a1 = (int)a;
    printf("a1 =%d",a1);
    a2 = a-a1 ;
    printf("a2= %f",a2);
    tf = a2*60;
    printf("tf = %f",tf);
    a = (a1*100)+tf;

 return (a);

}





