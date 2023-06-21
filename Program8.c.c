#include<stdio.h>
void display(int *num)
{
	printf("\nBefore adding=%d",*num);
	*num=*num+10;
	printf("\nAfter adding=%d",*num);
}
  int main()
  {
  	 int a=10;
  	 printf("Before printing a=%d",a);
  	 display(&a);
  	 printf("\nAfter fun call a=%d",a);
  }
