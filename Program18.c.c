//Grade od the student
#include<stdio.h>
int main()
{
	int num;
	printf("Enter Your Marks:");
	scanf("%d",&num);
	if(num>=80)
	{
		printf("A Grade");
	}
	else if(num>=60)
	{
	  printf("B Grade");
	}
	else if(num>=40)
	{
		printf("C Grade");
	}
	else
	{
		printf("failed exam");
	}
}
