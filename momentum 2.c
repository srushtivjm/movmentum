#include<stdio.h>
main()
{
	int number;
	
	printf("Enter any number=");
	scanf("%d",&number);
	
	(number%2==0)?printf("number is even.")
	             :printf("number is odd.");
}
