#include<stdio.h>
int main()
{

	int i=1,no,totaladd=0;
	do
	{
		printf("\n Enter no:");
		scanf("%d",&no);
		totaladd=totaladd+no;
		i++;
	}
	while(i<=10);
	printf("\nTotal Addition:%d",totaladd);
	return 0;
}

