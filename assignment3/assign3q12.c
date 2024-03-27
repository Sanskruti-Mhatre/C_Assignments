#include<stdio.h>

int main()
{
	int base,index;
        long long pow = 1;
	int i;

	printf("Enter base:");
	scanf("%d",&base);

	printf("Enter index:");
	scanf("%d",&index);

	for(i=1;i<=index;i++)
	{
		pow = pow*base;
	}

	printf("%d ^ %d = %lld", base, index, pow);

	return 0;
}
