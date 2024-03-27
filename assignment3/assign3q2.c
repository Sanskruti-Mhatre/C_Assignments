#include<stdio.h>

int main()
{
	int num;
	int i = 1;


	printf("Enter a number:");
	scanf("%d",&num);

	while(i<=10)

	{
		i++;
		printf("%d*%d=%d\n",num,i,num*i);

		
	}
	return 0;
}
