//Leap year or not leap year
#include<stdio.h>
int main()
{
	int year;
	printf("Enter The Year:");
	scanf("%d",&year);
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
	  printf("Year is Leap Year",year);	
	}
	 
	else
	{
		printf("Year is Not leap Year",year);
	}
}
