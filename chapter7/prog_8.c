#include<stdio.h>

int
main(void)

{

   FILE *input;
    double thisyr[12],   // input rainfall of this year
           lastyr[12],   // input rainfall of last year
           thisyrtotal =0, // this year total rainfall
           lastyrtotal = 0, // last year total rainfall
           avgthis,         // calculate average raifall of this yr
           avglast;        // calculate  average rainfall of last year
    int i;                 //loop variable
    char *months[15] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    input = fopen("input.txt","r");
     for(i =0;i<12;i++)
     {
         fscanf(input,"%lf%lf",&thisyr[i],&lastyr[i]);
         thisyrtotal += thisyr[i];
         lastyrtotal += lastyr[i];
     }
     avgthis = thisyrtotal/12.0;
     avglast = lastyrtotal/12.0;
     printf("\t\ttable of monthly rainfall\n");
     for(i =0;i<12;i++)
     {
        printf("%10s\t",months[i]);
     }
      printf("\n");
      printf("this year");
      for (i =0;i<12;i++)
        printf("%10.2f",thisyr[i]);
      printf("\n");
      printf("last year");

      for (i =0;i<12;i++)
        printf("%10.2f",lastyr[i]);
      printf("\n");
      printf("total rainfall this year : %.2f\n",thisyrtotal);
      printf("total rainfall last year : %.2f\n",lastyrtotal);
      printf("average monthly rainfall this year : %.2f\n",avgthis);
      printf("average monthly rainfall last year : %.2f\n",avglast);

      fclose(input);
      return(0);
}
