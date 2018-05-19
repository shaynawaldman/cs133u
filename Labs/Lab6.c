/* repdigit.c
 *
 * Solution to Programming Project 1 (Chapter 8)
 *
 * From C PROGRAMMING: A MODERN APPROACH (Second Edition)
 *
 * Copyright (c) 2008 W. W. Norton & Company
 * All rights reserved.
 *
 * This program may be freely distributed for class use,
 * provided that this copyright notice is retained.
 */

/*
Lab 6
Compile and Run the repdigit.c as is.
Explain the algorithm in that code. (What is it doing) in comments inline with the code
Submit the code algorithm with explanation as comment.
*/

#include <stdio.h>
#define true 1
#define false 0
int main(void)
{
	// Program deposits input into an array, scans for repeated digits, and puts repeated digits into a second array. It then prints the content of the second array.
	
	//declaring (and initializing first two) variables
	int digit_count[10] = {0};
	int repeated_digits = false;
	int digit;
	long n;

	printf("Enter a number (for example 89065590): "); //prompting user to enter a number
	scanf("%ld", &n); //accept long digit input to variable n

	while (n > 0) { //while variable n is initialized with a positive value,
		digit = n % 10; //initialize digit variable with the remainder of the quotient of n / 10
		if (digit_count[digit] > 0) //if array with the length of the digit variable is greater than 0, then
			repeated_digits = true; //
		digit_count[digit]++; // and 
		n /= 10; // and
	}

	if (repeated_digits) { // if there are repeated digites, 
		printf("Repeated digit(s):");
		for (digit = 0; digit < 10; digit++)
			if (digit_count[digit] > 1)
				printf(" %d", digit);
		printf("\n");
	} else
		printf("No repeated digit\n"); // if not repeated digits, 

	return 0;
}