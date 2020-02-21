#include <stdio.h>

main(void)
{

  char grade ;
  double course_grade,min_avg,cur_avg,formula;
 
  printf("Enter desired grade> ");
  scanf(" %c",&grade);

   printf("Enter minimum average required> ");
   scanf("%lf",&min_avg);

   printf("Enter current average in course> ");
   scanf("%lf",&cur_avg);
   
   printf("Enter how much the final counts as a percentage of the course grade> ");
   scanf("%lf",&course_grade);

     formula =(min_avg -(100-course_grade)*(cur_avg/100))*100/course_grade;

	 printf("You need a score of %0.2lf on the final to get a  %c .\n",formula,grade);

}	 
