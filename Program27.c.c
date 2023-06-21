#include<stdio.h>
int main()
{
	int weight;
	printf("Enter clothes weight:");
	scanf("%d",& weight);
	if(weight>0 && weight<=2000)
	{
		printf("Time estimation 25 min");
	}
	else if(weight>=2001 && weight<=4000)
	{
		printf("Time estimation 35 min");
	}
	else if(weight>=4001 && weight<=7000)
	{
		printf("Time estimation 45 min");
	}
	else
	{
		printf("Invalid Input");
	}
}
