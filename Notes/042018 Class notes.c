#include <stdio.h>

int main() {

/*	
4/20/18 Class notes. Loops.
*/


/*
if/then statements. No Semicolons after the if statement as it breaks the connection to the action.
*/

//	int myInt = 45;
//	
//	if (myInt < 45) {
//		printf("The value stored in myInt is less than 45");
//	}
//	
//	else if (myInt > 45) {
//		printf("The value stored in myInt is greater than 45");
//	}
//	
//	else {
//		printf("The value stored in myInt is 45");
//	}
//	
//	printf("\nThe end\n");
	
	
/*	
switch statedments execute faster and are cleaner than if/then
*/

//	int grade = 4;
//	
//	switch(grade){
//	case 4: printf ("Excellent");
//		break;
//	case 3: printf ("Good");
//		break;
//	case 2: printf ("Average");
//		break;
//	case 1: printf ("Poor");
//		break;
//	case 0: printf ("Fail");
//		break;
//	default: printf ("Illegal grade");
//		break;
		
/*
If remove break statements, cases are combined. This can save space
*/

//	switch(grade){
//	case 4: case 3: case 2: printf ("Excellent");
//		break;
//	case 1: printf ("Average");
//		break;
//	case 0: printf ("Fail");
//		break;
//	default: printf ("Illegal grade");
//		break;

/* 
while loops: will loop as long as condition is false. Must make sure condition is eventually made false to avoid infinite loop.
*/
//	int numToAddl =0;
//	int ctr =0;
//	float sum =0;
//
//	while(1) {  //<-- creates infinite loop
//		printf("Enter an integer >= 0 ");
//		scanf("%d", &numToAddl);
//		if (numToAddl < 0) //<--to add condition to stop loop; if statement then break to exit
//			break;
//		if (numToAddl == 0)
//			continue; //    <-- to continue with loop. doesn't exit from the loop, but skips input. this will skip 0 if user inputs it
//		sum = (sum + numToAddl);
//		++ctr;
//	}
//	
//printf("\nThe sum of %d integers is %.2f \n", ctr, sum);

/*
do while loops: do a thing while condition exists. actions happen first, then exit if condition is met. will always run at least once.
*/

//	int numToAddl =0;
//	int ctr =0;
//	float sum =0;
//
//	do{  //<-- creates infinite loop
//		printf("Enter an integer >= 0 ");
//		scanf("%d", &numToAddl);
//		if (numToAddl < 0) //<--to add condition to stop loop; if statement then break to exit
//			break;
//		if (numToAddl == 0)
//			continue; //    <-- to continue with loop. doesn't exit from the loop, but skips input. this will skip 0 if user inputs it
//		sum = (sum + numToAddl);
//		++ctr;
//	} while (0); //<-- runs once and stops because 0 = false
//	
//printf("\nThe sum of %d integers is %.2f \n", ctr, sum);

/*
for loops: 
	for( item to affect ; condition ; what you want to do )
	{
	}
	
	variables cannot be declared within for loops
*/
//	for (ctr = -15; ctr<= 15; ctr++) { //<-- if first item is blank, it chooses current value of item. would be 0 in this case
//		printf ("the value of ctr right now is %d\n", ctr);
//	}

}