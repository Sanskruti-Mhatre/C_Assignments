#include<stdio.h>
 int main ()

{
	int n,i,fact;
	fact=i=1;

	printf("Enter a number:");
	scanf("%d",&n);

	while(i<=n)
	{
		fact*= i;
		i++;
	}

	printf("Factorial of n : %d",fact);

	return 0;
}
