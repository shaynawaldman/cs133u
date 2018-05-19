#include <stdio.h>
#include <string.h>

int factorial(int n); //do this to define a function. "factorial" in this case

int main (){
int fact = 1;
	int num;
	while (1) {
		printf("\nEnter an int to calculate factorial of, 0 to quit: ");
		scanf("%d", &num);
		if (num == 0)
			break;
		fact = factorial(num);
		printf("\nthe factorial of %d is %d\n", num, fact);
	}
	
}

int factorial(int n) {
	int i, fac = 1;
		for (i = n; i > 1; i--)
			fac *= i;
			return fac;
			
			
//to create a stucture
//#define NAME_LEN 99
//int main(){
//	int v;
//	char anotherStr[NAME_LEN + 1] = "kavita";
//	struct {
//		int number;
//		char name[NAME_LEN + 1];
//		int on_hand;
//	} part1, part2;//part1 is a variable of type struct
//	
//	strcpy(part1.name, "Kavita"); //cant define part1; need to define arrays in part1. needs to be this format for a string
//	part1.number = 1;
//	part1.on_hand = 34;
}

