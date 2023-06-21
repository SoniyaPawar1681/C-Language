#include<stdio.h>
int soniya(int x)
{
	return x*x;
}
int main()
{
	int no;
	printf("Enter no:");
	scanf("%d",&no);
	printf("Square is=%d",soniya(no));
}
