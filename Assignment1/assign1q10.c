#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,peri,s,area;

	printf("ENTER 3 NUMBERS:");
	scanf("%d %d %d",&a,&b,&c);

	peri = a+b+c*a+b+c;

	printf("PERI = %d",peri);
        
	s=(a+b+c)/2;

        area = sqrt((s)*(s-a)*(s-b)*(s-c));

	printf("AREA = %d",area);

	return 0;
}


