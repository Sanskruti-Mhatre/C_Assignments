#include<stdio.h>

int main()
{
	int num,rem,rev=0;

	printf("Enter a number:");
	scanf("%d",&num);

	int temp = num;

	while(temp != 0)
	{
		rem = num % 10;
		rev  = rev*10 + rem;

		temp = temp / 10;
	}

	printf("%d",rev);
	if(rev == temp)
	{ 
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}

	return 0;
}
