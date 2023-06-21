#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("Enter Number 1:");
	scanf("%d",&no1);
	
	printf("Enter Number 2:");
	scanf("%d",&no2);
	
	printf("Enter Number 3:");
	scanf("%d",&no3);
	switch(no1>no2 && no2>no3)
	  {
	  	case 1:printf("no1 is larger:%d",no1);break;
	  	case 0:switch(no2>no1 && no2>no3)
	  	{
	  		case 1:printf("no2 is greater");break;
	  		case 0:printf("no3 is greater");break;
		  }
	  }
}
