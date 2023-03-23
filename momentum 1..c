#include<stdio.h>
main()
{
	char cha;
	
	printf("Write any caracter=");
	scanf("%c",&cha);
	
	
	if(cha>='a'&&cha<='z')
	{
		printf("Entered value is small character.");
	}
	else if(cha>='A'&&cha<='Z')
	{
		printf("Entered value is character.");
	}
	else if(cha>='0'&&cha<='9')
	{
		printf("Entered value is digit.");
	}
	else 
	{
		printf("Entered value is special caracter.");
	}
}

