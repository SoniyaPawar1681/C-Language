#include<conio.h>
int a=20; //global variable
extern int x=40;
void display1()
{
  int a=10;  //local variable
  auto int x=30; //automatic variable
  printf("\na=%d x=%d",a,x);
	
}
void display2()
{
  
  printf("\na=%d x=%d",a,x);
  a=a+60; x=x+100;
  printf("\na=%d x=%d",a,x);
	
}
int main()
{
 display1();
 display2();
 printf("\na=%d x=%d",a,x);
 
}
