//Area of the circle
#include<stdio.h>
#include<conio.h>
int main()
{
	int radius;
	float pi=3.14, area;
	
	printf("\nEnter the radius of the circle:");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("\nArea of the circle=%f",area);
	getch();
}
