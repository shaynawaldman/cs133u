#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>

int main() {
	/*
	4 Limits
	Write a program that declares variables of the following types, and initializes each variable to some non-zero value:
	1. int
	2. long int
	3. unsigned int
	4. float
	5. double
	6. long double
	7. char
	For each variable, display the maximum (positive) non-infinite value that can be represented.
	*/
	
	int varInt = INT_MAX;
	long int varLInt = LONG_MAX;
	unsigned int varUInt = UINT_MAX;
	float varFloat = FLT_MAX;
	double varDouble = DBL_MAX;
	long double varLDouble = LDBL_MAX;
	char varChar = CHAR_MAX;
	printf("\nThe maximum (positive) non-infinite value that can be represented for each variable type is:\n\nint:\n%i\n\nlong int:\n%ld\n\nunsigned int:\n%u\n\nfloat:\n%f\n\ndouble:\n%lf\n\nlong double:\n%Lf\n\nchar:\n%d\n", varInt,varLInt,varUInt,varFloat,varDouble,varLDouble,varChar);
	printf("LDBL_MAX = %d\n", LDBL_MAX);
	
}