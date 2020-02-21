#include<stdio.h>

double CalcAcce(double i,double f,double t);
double Stop(double i,double a);
void instructions();

int main(void)
{
    double i,f,a,t;  //input & output variables
        instructions();
        scanf("%lf %lf %lf",&i,&f,&t);
        a=CalcAcce(i,f,t);
        printf("constant accelaration = %f",a);
        printf("time taken to stop >%lf",Stop(i,a));

   return(0);
}
// instructions for user
void instructions()
{
    printf("Enter the initial and final velocity and time\n After you have entered all the values by separating a space press enter >> ");

}

// calculate constant acceleration rate
double CalcAcce(double i,double f,double t){
double a= (f-i)/t;
return a;
}

//time to stop the cycle
double Stop(double i,double a){

return (-i/a);
}

