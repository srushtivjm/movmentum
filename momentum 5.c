#include<stdio.h>
main()
{
	int unit,amt,sc;
	
	printf("Enter unit=");
	scanf("%d",&unit);
	
	if(unit<=50);
	{
		amt=unit*0.50;
	}
	else if(unit<=150)
	{
		amt=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		amt(unit-150)*1.20+100;
	}
	else 
	{
		amt(unit-250)*1.50+220;
	}
	
	sc=amt*20%;
	
	printf("elecricity bill =%f",amt+sc);
}

