#include <stdio.h>
int main()
{
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("%d ", j);
      }
      printf("\n");
   }

     printf("\n");
 

   for (i = rows; i >= 1; i--)
   {
	   int k=i;
      for (j = 5; j>=i&&j>0 ; j--)
      {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
   
