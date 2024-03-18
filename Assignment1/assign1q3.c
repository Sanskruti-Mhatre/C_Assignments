#include<stdio.h>

int main()
{
	char ch;
	int num;

	printf("Enter a character:");
	scanf("%c",&ch);
        
	printf("%d %o %x\n",ch,ch,ch);
        
	printf("enter a number:");
	scanf("%d",&num);

	printf("%c",num);

	return 0;
}
