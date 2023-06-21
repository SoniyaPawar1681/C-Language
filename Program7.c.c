//Average of 5 number using function
#include<stdio.h>
int main()
{

  int a,b,c,d,e,avg,add;
  void average()
  {
  
  printf ("Enter Your 5 Number: \n");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    add=a+b+c+d+e;
    avg=add/5;
    printf("average is %d:",avg);
   }
   average();
}
