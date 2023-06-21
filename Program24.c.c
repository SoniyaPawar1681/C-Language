#include<stdio.h>
#include<conio.h>
int a=20; //global variable
void display1()
{
  int a=10;  //local variable
  printf("%d",a);
	
}
void display2()
{
  
  printf("%d",a);
	
}
int main()
{
 display1();
 display2();
 printf("%d",a);
 
}
