/*
Labs For Functions
Factorial
Write a non-recursive function that will accept an integer value n and return
the factorial of the value (n!).
*/

#include <stdio.h>

int factorial(int n);

int main() {
	int n;
	printf("Enter an integer value (n): ");
	scanf("%i", &n);
//	printf("\nthe value is %i", n);
	printf("The factorial of %i is %i.", n, factorial(n));
	
}

int factorial(int n) {
	int i, fac = 1;
	for (i = n; i > 1; i--)
		fac *= i;
	return fac;
}