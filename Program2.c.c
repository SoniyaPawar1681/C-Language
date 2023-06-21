//Addition,substraction,multiplication,division of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,add,sub,mul,div;
	add=a+b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("addition of two Number:%d\n",add);
	

	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("substraction of two Number:%d\n",sub);
	

	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	mul=a*b;
	printf("multiplication of two Number:%d\n",mul);
	

	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	div=a/b;
	printf("division of two Number:%d\n",div);
	getch();
}
