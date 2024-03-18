#include<stdio.h>
 
int main()
{
	char c;

	printf("Enter a character:");
	scanf("%c",&c);

	if((c >= 65 && c<=90) || (c>=97 && c<=122))
	{ 
		{
		printf("C is Alphabet");
		}
    		if((c>=65 && c<=90))
		{
			printf("c is a uppercase");
		}
		else
		{
			printf("c is a lowercase");
		}
	}

	else if(c>=48 && c<=57)
	{
		printf("C is a digit");
	}
	else if(c =='\n')
		printf("Enter\n");
	else if(c == '\t')
		printf("Tab \n");
	else if( c == 32 || c == ' ')
		printf("Space\n");

	return 0;
}


   	
