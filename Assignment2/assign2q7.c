#include<stdio.h>

 int main()
{
    int year;

    printf("Enter a year:");
    scanf("%d",&year);

    if( year % 400 == 0)
		printf("Leap Year \n");
	else if( year %100 == 0 )
		printf("Not Leap \n");
	else if( year % 4 == 0 )
		printf("Leap Year \n");
	else
		printf("Not leap \n");

	if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0   )
		printf("Leap Year \n");
	else
		printf("Not Leap");

	(year % 4 == 0 && year % 100 != 0)?printf("Leap1\n")  : (year % 400 == 0)?printf("Leap2\n") : printf("Non-Leap\n");

	return 0;

}
