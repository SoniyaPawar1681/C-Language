//Character is alphabet,digit or special character
#include<stdio.h>
int main()
{
  char ch; 
  printf("Enter the number:");
  scanf("%c",&ch);
  if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
  {
  	printf("This character is an alphabet",ch);
  }	
  else if(ch>='0' && ch<='9')
  {
  	printf("This is digit",ch);
  }
  else
  {
  	printf("This is special character",ch);
  }
}
