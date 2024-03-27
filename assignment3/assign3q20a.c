#include<stdio.h>

int main()
{
   int flag;

   for(int j =2;j<=100;j++)
   {

	for(int i=2;i<=j/2;i++)
	{
		if(j%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%d ",j);
	flag=0;
}
return 0;
}


