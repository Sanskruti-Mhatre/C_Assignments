#include<stdio.h>

long int factorial(int number) {
   long int fact = 1;
   
   for(int i = 1; i <= number; i++) {
      fact = fact * i;
   }
   
   return fact;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d is: %ld", number, factorial(number));
    return 0;
}
