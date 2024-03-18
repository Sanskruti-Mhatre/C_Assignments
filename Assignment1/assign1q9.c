#include<stdio.h>

int main()
{
	float Fahrenheit,Celsius;

	Fahrenheit = 75;

	Celsius = Fahrenheit-32*5/9;

	printf("Temperature in celsius:%f\n",Celsius);

	Celsius = 45;

	printf("Temp in fahrenheit : %f",Fahrenheit);

	return 0;
}
