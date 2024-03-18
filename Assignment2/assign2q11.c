#include<stdio.h>
 int main()
{
	int a,b,x,y;

	printf("Enter a and b:");
	scanf("%d %d",&a,&b);

	if ( a== 1 && b==5)
	{
	       	printf("Coordinates are in 1st QUADRANT");
	}
        else if( a==-1 && b==-5)
	{ 
	 	printf("coordinates are in 3rd QUADRANT");
	}
	else if( a==1 && b==-5)
	{
		printf("Coordinates are in 4th QUADRANT");
	}
	else if( a==1 && b==5)
	{
		printf("Coordinates are at origin");
	}
	else if( a==-1 && b==5)
	{
		printf("Coordinates are in 2nd QUADRANT");
	}
	else if( a==0 && b==y)
	{
		printf("Coordinates are on Yaxis");
	}
	else if( a==x && b==0)
	{
		printf("Coordinates are on X axis");
	}

	return 0;
}
