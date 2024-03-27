#include<stdio.h>

int main()
{
	int num;

	printf("Enter number:");
	scanf("%d",&num);

	while(num>0)
	{
		printf("*");
		num--;
	}

	return 0;
}
