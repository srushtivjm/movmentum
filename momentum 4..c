#include<stdio.h>
main()
{
	char day;
	
	
	printf("Enter first letter of week day=");
	scanf("%c",&day);
	printf("press s for sunday.\n");
	printf("press m for monday.\n");
	printf("press t for tuesday.\n");
	printf("press w for wednesday.\n");
	printf("press T for Thursday.\n");
	printf("press f for friday.\n");
	printf("press S for Saturday.\n");
    scanf("%c",&day);
	switch(day)
	{
		case s:
			   printf("sunday\n");
			   break;
		case m:
			   printf("monday\n");
			   break;
		case t:
		       printf("tuesday\n");
			   break;
		case w:
		       printf("wednesday\n");
			   break;	   
	   	case T:
		       printf("thursday\n");
			   break;	   
        case f:
		       printf("friday\n");
			   break;
        case S:
		       printf("saturday\n");
			   break;
	default:
	        printf("Enter valid alphabet.");		   	   
	        break;

	}
	
	
}
