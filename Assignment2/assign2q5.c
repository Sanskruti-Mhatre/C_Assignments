#include<stdio.h>
 int main()
{
	int num1 = 10;
	int num2 = 9;
	int num3 = 12;

	if(num1>num2 && num1>num3)
	{
		printf("num1 is greater");
	}
	else if(num2>num1 && num2>num3)
	{
	  printf("num2 is greater");
	}
	else
	{  printf("num3 is greater");
	}
}

