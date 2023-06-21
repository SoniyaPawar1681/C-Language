//Number is divisible by5 and 11
#include<stdio.h>
int main()
{
	int n;
	printf("Enter your number:\n");
	scanf("%d",&n);
	if((n%5==0) && (n%11==0))
	{
	  printf("Number is divisible by 5 and 11\n");	
	}
	 
	else
	{
		printf("Number is not divisible by 5 and 11\n");
	}
}
