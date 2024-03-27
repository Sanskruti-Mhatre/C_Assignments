#include<stdio.h>

int main()
{

	int i,j;

	for(i=0;i<=5;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("* ");
		}

		printf("\n");
	}
           printf("\n");

	for(i--;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("* ");
		}

		printf("\n");
	}

	return 0;
}
	
