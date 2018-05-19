/* 04/06/2018

Components of a C program

Comments
	// = single line comment /* = multi line comment
	*/ /* = double line comment

c programs begin with #include <name of library>
	ex: #include <stdio.h>
	stdio.h is a library that includes reading and writing

c programs always will have a `main`
	how many mains can you have in a program? 1.
	`main` is a funtion. must be in all programs.

`printf` is a funtion. it  prints what is imput.
	ex: printf("Hello World!\n")	
	`\n` adds a new line
	`\t` adds a tab
	`\b` adds a backspace

`getchar()` pauses the program. !!don't use this in assignements!!

lines of code inside `main` are called statements
	all statements end with `;`
	
Variables
	start with type of variable (int = integer: number without decimal, float = decimal: number with decimal, char = character: can hold anything) then a space, then the variable name. ex: int x
	variables need to be declated and then initiated
	ex.: float myDecimal = 0.0
	can be declated as: */
		char s = foo
		char e = fa
		or
		char s = foo
			, e = fa


// to find sum: "The sum of" x "&" y "is:"sum example:

#include <stdio.h>

int main() {
	int x = 2;
	int y = 0;
	int sum = x + y;
	printf("The sum of %d and %d is %d\n", x,y,sum); //$d is a place holder for variable. add `,` and variables in order outside of quotes.
	
}

pcc server name
syccuxas01

/* 04/11/18

when adding number in %d like %5d, it adds the specified number of space

`scanf` stands for read
	formated like `scanf("%d", &inVar);`
	& is needed in front of variables in scanf