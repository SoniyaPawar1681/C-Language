//Grade of the student
#include<stdio.h>
int main()
{
	int percentage;
	printf("Enter Your Marks:");
	scanf("%d",&percentage);
	if(percentage<35)
	{
		printf("fail");
	}
	else if(percentage>=35 && percentage<=50)
	{
	  printf("Pass class");
	}
	else if(percentage>=51 && percentage<=60)
	{
		printf("Second class");
	}
    else if(percentage>=61 && percentage<=70)
	{
		printf("First class");
	}
	else
	{
		printf("Distinction");
	}
}
