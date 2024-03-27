#include<stdio.h>
 
int main()
{
	int num,i=1,j,Count;

	printf("Enter a number:");
	scanf("%d",&num);

	    while (i <= num)
    {
        Count = 0;
        if(num % i == 0)
        {
            j = 1;
            while(j <= i)
            {
                if(i % j == 0)
                {
                    Count++;
                }
                j++;
            }
            if(Count == 2)
            {
                printf("%d is a Prime Factor \n", i);
            }
        }
        i++;
    }
    return 0;
}
