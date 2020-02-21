#include <stdio.h>

main(void)

{
   int m,n,h,s1,s2;

  printf("enter the value of m greater than n");
  scanf("%d %d",&m,&n);
  
  s1 = (m*m)-(n*n);
  s2 =2*m*n;
  h = (m*m)+(n*n);


  printf("side1 = %d ,side2 = %d ,side3 = %d .",s1,s2,h);

}

     
