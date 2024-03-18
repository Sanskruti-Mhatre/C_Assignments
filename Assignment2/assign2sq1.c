#include<stdio.h>

int main()
{

	int month,year;

	printf("Enter month:");
	scanf("%d",&month);

	switch(month)
	{
	case 1 :
		printf("no. of days 31");
		break;
	
	case 2 :{if(( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			{
			       	printf("No. of days 29");
			        break;
			}
			else
		 	{ 
			  	printf("No. of days 28");
			}
		
			}
	case 3 : {
 			printf("No. of days 31");
			break;
		 }
	case 4 : {
		       printf("No. of days 30");
	               break;
		 }
        case 5 : {
		       printf("No. of days 31");
		       break;
		 }
        case 6 : {
		       printf("No. of days 30");
		       break;
		 }
	case 7 : {
		      printf("No. of days 31");
		      break;
		 }
	case 8 : {
		      printf("No.of days 31");
	              break;
		 }
       case 9 : {
        	      printf("No.of days 30");
                      break;
                 }
       case 10 : {
	 	      printf("No.of days 31");
                      break;
		 }
       case 11 : {
		      printf("No.of days 30");
		      break;
		 }
      case 12 : {
	             printf("No. of days 31");
		     break;
		}
	}

	return 0;
}		
	    			 
	
