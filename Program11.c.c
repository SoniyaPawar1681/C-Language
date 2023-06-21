#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[10];
	int i=0,digitcount=0,spacecount=0;
	printf("Input any string:");
	gets(ch1);
	while(ch1[i]!='\0')
	{
	   if(ch1[i]>=48 && ch1[i]<=57)
	   {
	   	 digitcount++;
	   }
	   i++;	
	}
	printf("%d",digitcount);
	
}
