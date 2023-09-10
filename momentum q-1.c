#include<stdio.h>
main()
{
	char ch;
	printf("enter the value of character= ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("given the value is capital alphabet.");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("given the value is small alphabet.");
	}	
	else if(ch>='0'&&ch<='9')
	{
		printf("given the value of digit.");
	}
	else
	{
		printf("given the value is special character.");
	}
}