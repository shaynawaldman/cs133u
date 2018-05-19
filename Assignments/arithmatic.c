#include <stdio.h>
#include <math.h>

int main()
{
	/*
	Create a program called arithmetic.c that does the following:
	• Prompt for and accept an unsigned short int value
	• Display the value of 2 raised to the power of the value input in (1), i.e. display 2n, where n is the value from (1). 
	HINT: Use math.h pow function, some casting would be needed.
	• Prompt for and accept an unsigned short int value, and assume that this is the radius of a circle
	• Display the values of the circumference and area of the circle whose radius is given by (3)
	• Prompt for and accept a float value
	• Display the value of the polynomial 2x3 + 3x2 + 4x + 5, where x is the value read in (5)
	• Prompt for and accept two int values. Display the remainder when the first integer is divided by the second using 1 single operation.
	*/

	unsigned short ussInt;
	printf("Enter an unsigned short int value: ");
	scanf("%hu", &ussInt);
	printf("2 raised to the power of %d is %f.\n", ussInt, pow(2,ussInt));

	unsigned short radius;
	printf("Enter the radius of the circle: ");
	scanf("%hu", &radius);
	printf("The circumferance of the circle is %f. The area of the circle is %f.\n", 2*(M_PI*radius), M_PI*pow(radius,2));

	float xVar;
	printf("Enter a value for the x variable: ");
	scanf("%f", &xVar);
	printf("You entered %f. The result of the polynomial 2(%f*3) + 3(%f*2) + 4*%f + 5 is %f.\n", xVar, xVar, xVar, xVar, 3*xVar*2+3*xVar*2+4*xVar+5);
	
	int firstInt;
	int secondInt;
	printf("Enter two int values: ");
	scanf("%i%i", &firstInt, &secondInt);
	printf("The remainder is %i", firstInt%secondInt);  
		
return 0;
}