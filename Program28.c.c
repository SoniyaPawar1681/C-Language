//Grade of the student switch case
#include<stdio.h>
int main()
{
	float percentage;
	printf("Enter Your Percentage:");
	scanf("%f",&percentage);
	switch(percentage<35)
	{
	    case 1:printf("fail");break;
	    case 0:switch(percentage>=35 && percentage<=50)
    	 {
	       case 1: printf("Pass class");break;
	       case 0:switch(percentage>50 && percentage<=60)
           {
		       case 1:printf("Second class");break;
	           case 0:switch(percentage>60 && percentage<=70)
            	{
	            case 1:printf("First class");break;
	            case 0:switch(percentage>70 && percentage<=100)
	              {
	                 case 1:printf("Distinction");break;
					 default:printf("Invalid Input");
				  }
	            
				}
            }
       }
       
   }
}
