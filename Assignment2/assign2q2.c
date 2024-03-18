#include<stdio.h>

int main()
{
	int num;

	printf("Enter a number:");
        scanf("%d",&num);

	if(num%2 == 0)
	{
		printf("Number is EVEN");

	}
	else
	{
		printf("Number is ODD");
	}

	return 0;
}
