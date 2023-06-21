//rewind
#include<stdio.h>
int main()
{
	FILE *a; char c;
	a=fopen("hello.txt","r");
	while((c=fgetc(a))!=EOF)
	{
	 printf("%c",c);
    }
    rewind(a);
    
    while((c=fgetc(a))!=EOF)
	{
	 printf("%c",c);
    }
    fclose(a);
}
