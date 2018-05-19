#include <stdio.h>


int main(int argc, char *argv[]) {
	
	/* 3 Formatted Input and Output
	Write a program that accepts four (4) lines of input:
	• The first line contains a float value in 4.2f format
	• The second line contains a char value
	• The third line contains a 4-digit int value
	• The fourth line contains a char value
	and then displays all of the input on a single line */

	float fVal;
	char cVal;
	int iVal;
	char c2Val;
	
	printf("Enter a float value in 4.2f format ");
	scanf("%f", &fVal);
	
//	getchar();
	
	printf("Enter a charater value ");
	scanf("%c", &cVal);
	
//	getchar();
	
	printf("Enter a 4 digit integer value ");
	scanf("%i", &iVal);
	
//	getchar();
	
	printf("Enter another charater value ");
	scanf("%c", &c2Val);
	
//	getchar();

	printf("%4.2f\t%c\t%i\t%c", fVal,cVal,iVal,c2Val);
	
	/* Phone Number
	Write a program that accepts a phone number of the form +1(xxx)-xxx-xxxx
	where x is a digit, and displays the sum of all digits in the phone number. */
	
	//char phoneNumber
	
}