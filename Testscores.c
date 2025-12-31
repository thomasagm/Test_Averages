#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  double x,y, z, mean1, a, b, mean2;

  z=0;
  y=0;
  mean1=0;
  mean2=0;
  a=0;
  b=0;

  printf("please enter the test grades\n");
  
  scanf("%lf", &x);

  while(x>0){
    if(x==1){
      scanf("%lf", &x);
      y=x+y;
      z=z+1;
      mean1=y/z;
      scanf("%lf", &x);
    }
    else if(x==2){
       scanf("%lf", &x);
      a=x+a;
      b=b+1;
      mean2=a/b;
      scanf("%lf", &x);
    }}
 
	
      if(mean1>0){ printf("The mean of test group 1 is %lf\n", mean1);}
      if(mean2>0){ printf("The mean of test group 2 is %lf\n", mean2);}
       if(b==0){
    printf("There are no test 2's\n");}
       
      if(z==0){
	printf("There are no test 1's\n");}
}
      
	     
