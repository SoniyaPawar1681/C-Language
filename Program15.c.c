//Eligible to vote or not
#include<stdio.h>
int main()
{
	int age;
	printf("Enter The Age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Eligible For Voting");
	}
	else
	{
		printf("Not Eligible For Voting");	
	}
}
