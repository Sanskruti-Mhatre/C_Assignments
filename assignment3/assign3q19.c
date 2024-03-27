#include<stdio.h>

int main()
{

	int l,k;

	printf("Enter 2 numbers:");
	scanf("%d %d",&l,&k);


	for( int i=1;i<=10;i++) 
	{
		for(int j=l;j<=k;j++)
		{
			printf("%d\t",i*j);
		}

		printf("\n");
	}
	return 0;
}
	
