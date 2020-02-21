/*Calculate the cost of each container and the total cost of producing all the containers*/

#include <stdio.h>

#define pi 3.1416 


void instructions();    //function for instuction to user

double surface_area(double r,double h);

int 
main(void)
{
   double area,cost_one,tot_cost,radius,height,cost;   // input variables
   int quantity;   //total quantity input

   instructions();
   scanf("%lf%lf%lf%d",&radius,&height,&cost,&quantity);
  area=  surface_area(radius,height);
  
  // calculation of cost
  cost_one = area*cost;
  tot_cost = cost_one*quantity;
  
  printf("cost of each container = Rs %.2f\n",cost_one);
  printf("Total cost = Rs %.2f",tot_cost);
}

//function for user 
void
instructions()
{
  printf("1. enter the radius of the base\n2. enter the height of the container\n3.enter the cost of each container\n4. enter the quantityof containers\n!!separate each values by spacebar and then press Enter key to run\n");

}

// calculation of surface area
double surface_area(double r,double h)
{
   double a;

   // calculations
   a = (pi*r*r)+(2.0*pi*r*h);
   return(a);
 
}

//end of program
