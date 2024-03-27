#include<stdio.h>

int main()
{
	int num,res,temp;

	printf("Enter a number:");
	scanf("%d",&num);

	int i=1;
        temp=num;

	while(i<=4)
	{
          while(temp<=num&&temp>0)
	  {
		  res=i*temp;
		  if(i*temp==num)
		  {
		  printf("%d * %d = %d\n",i,temp,res);
		  temp--;
		  break;
		  }
		  temp--;
	  }
	  
	  i++;

	}

	return 0;
}

