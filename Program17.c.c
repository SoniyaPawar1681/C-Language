//Factorial number using function
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	void factorial()
	{
		printf("Enter your number:\n");
		scanf("%d",&n);
	 
	    for(i=1;i<=n;i++)
	    {
	    	fact=fact*i;
	   }
	   printf("Factorial is %d",fact);
	}
	factorial();
}
