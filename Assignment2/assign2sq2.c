#include<stdio.h>

 int main()
{
	int n1,n2,Ans;
	char op;


	printf("Enter n1:");
	scanf("%d",&n1);

	printf("Enter operand:");
	scanf("%*c%c",&op);

	printf("Enter n2:");
	scanf("%d",&n2);

	switch(op)
	{
		case '+' : Ans = n1 + n2;
			   printf("%d\n",Ans);
			   break;

		case '-' : Ans = n1 - n2;
		           printf("%d\n",Ans);
		           break;

		case '*' : Ans = n1 * n2;
		           printf("%d\n",Ans);
                           break;
			  
       		case '/' : if(n2!=0)
		           { 
			        Ans = n1/n2;
	       			printf("%d\n",Ans);
			   }
	 		   else
			   {
	                     printf("zero error");
			     break;
			   }	

		default : printf("Invalid Operand");
			  break;
	}
	 return 0;
}

