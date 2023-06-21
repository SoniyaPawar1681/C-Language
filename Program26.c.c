#include<stdio.h>
int main()
{
	int salary,rating;
	float total_salary;
	printf("Enter the salary:");
	scanf("%d",& salary);
	printf("Enter the rating:");
	scanf("%d",& rating);
	if(rating>=1 && rating<=3)
	{
		total_salary=salary+(salary*10/100);
		printf("The total salary is:%f",total_salary);
	}
	else if(rating>=3.1 && rating<=4)
	{ 
	    total_salary=salary+(salary*25/100);
		printf("The total salary is:%f",total_salary);
	}
	else if(rating>=4.1 && rating<=5)
	{
		total_salary=salary+(salary*30/100);
		printf("The total salary is:%f",total_salary);
	}
	else
	{
		printf("Invalid Salary");
	}
}
