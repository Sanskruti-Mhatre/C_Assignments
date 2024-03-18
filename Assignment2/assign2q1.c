#include<stdio.h>

int main()
{
	int a,b,div;

	printf("Enter num :");
	scanf(" %d",&a);

	printf("ENTER num:");
	scanf("%d", &b);

	if (b == 0)
	{
	  printf("Zero error");
	}
	else
	{ div = a/b;
	  printf("Div = %d",div);
	}

	return 0;

}	

