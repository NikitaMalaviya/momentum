#include<stdio.h>
main()
{
	char day;
	printf("\n enter value of day= ");
	scanf("%c",&day);
	switch(day)
	{
		case 'S':
			  printf("SUNDAY");
			  break;
		case 'M':
			  printf("MONDAY");
			  break;
		case 'T':
			  printf("TUESDAY");
			  break;
		case 'W':
			  printf("WEDNESDAY");
			  break;
		case 't':
			  printf("THRUSDAY");
			  break;
		case 'F':
			  printf("FRIDAY");
			  break;
		case 's':
			  printf("SATURDAY");
			  break;
		default:
		     printf("IN VALID INPUT");	  	  	  	  	  	  	  
	}
}