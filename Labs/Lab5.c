#include <stdio.h>

int main() {
	/*
	Lab 5 Selection and Loops
	Instructions
	Lab For Selection Control
	Write a single program that

	Accepts four (4) int values and displays the sum of
	the largest and smallest of the values.
	*/
	int value1, value2, value3, value4, small, large;
	printf("Enter 4 int values: ");
	scanf("%d%d%d%d", &value1, &value2, &value3, &value4);
	
	small = value1;
	if (small > value2) {small =  value2;}
	if (small > value3) {small = value3;}
	if (small > value4) {small = value4;}
//	printf ("The smallest value is %d\n", small);
	
	large = value1;
	if (large < value2) {large =  value2;}
	if (large < value3) {large = value3;}
	if (large < value4) {large = value4;}
//	printf("The largest value is %d\n", large);
	
	printf("The sum of the largest and smallest values is %d.\n", small+large);
//	
//	/*
//	Mean, Lab for Repetetion
//	Accepts a sequence of positive integers from the user
//	(n > 0). The first non-positive value (n ≤ 0) terminates the sequence. The terminating value (n ≤ 0) is not included in the mean.
//
//	Display the mean value of the series. Note that the mean value of a sequence of n integers a, a2…an is
//	a1+a2+a3+...+ann
//
//	and note that the mean value may not be an integer.
//	*/
//	printf("Enter a sequence of positive integers, separated by a space. Terminate with a negative number.");
//	int myArray[]{scanf("%s", &myArray);}
//	printf("%s", myArray);
}