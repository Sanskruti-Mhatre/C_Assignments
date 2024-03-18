 #include<stdio.h>

 int main()
{
	int month, year;

	printf("Enter a month:");
	scanf("%d",&month);

	if(month == 1)
	{
		printf("Number of days 31");
	}
	else if(month == 2)
	{
		if(( year % 4 == 0 && year % 100!= 0) || year % 400 == 0)
		
	       	{  
			printf("Number of days 29");
		}
		
		else 
		{  
			printf("Number of days 28");
		}
	}
		else if(month == 3)
		{
			printf("Number of days 31");
		}
		else if(month == 4)
		{
			printf("Number of days 30");
		}
		else if(month == 5)
		{
			printf("Number of days 31");
		}
		else if(month == 6)
		{  
			printf("Number of days 30");
		}
		else if(month == 7)
		{
			printf("Number of Days 31");
		}
		else if(month == 8)
		{
			printf("Number of days 31");
		}
		else if(month == 9)
		{
			printf("Number of days 30");
		}
		else if(month == 10)
		{
			printf("Number of days 31");
		}
		else if(month == 11)
		{
			printf("Number of days 30");
		}
		else if(month == 12)
		{
			printf("Number of days 31");
		}
		return 0;
	}
