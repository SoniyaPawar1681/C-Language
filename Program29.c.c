#include<stdio.h>
int main()
{
	int weight;
	printf("Enter clothes weight:");
	scanf("%d",& weight);
	switch(weight>0 && weight<=2000)
	{
		case 1:printf("Time estimation 25 min");break;
	    case 0:switch(weight>=2001 && weight<=4000)
	    {
		  case 1:printf("Time estimation 35 min");break;
		  case 0:switch(weight>=4001 && weight<=7000)
          {
		     case 1:printf("Time estimation 45 min");break;
	         default:printf("Invalid Input");
	      }
        }
   }
}
