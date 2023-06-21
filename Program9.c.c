#include<stdio.h>
int main()
{
	int num;
    printf("Enter the number:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("One");
			break;
	    case 2:
			printf("two");
			break;
	    case 3:
			printf("Three");
			break;
	    case 4:
			printf("Four");
			break;
	    default:
	    	printf("wrong number");
	    	
	}
}
