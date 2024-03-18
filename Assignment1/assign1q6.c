#include<stdio.h>

 int main()
{
   int num;

   printf("Enter a number:");
   scanf("%d",&num);

   for ( int i=1; i<11; i++)
   {
	   printf("%d\n",num*i);
   }
   return 0;
}
	  
