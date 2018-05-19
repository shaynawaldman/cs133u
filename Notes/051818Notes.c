/*
pointers are variables
int * myIntPointer;
pointer variable is always going to store an address
in &int,  & gets the address of int.

pointers come in handy for arrays

*/



#include <stdio.h>
#define NAME_LEN 99
#define N 10

//void passByValue(int);
//void passByRef(int);
//
//int main() {
//	
//	int myInt;
//	int * myIntPtr;
//	int n = 23;
//	printf("The vaulue of n prior to calling function passing n by value is %d\n", n);
//	
//	printf("The address of myInt is %d\n", &myInt);
//	myIntPtr = &myInt;
//	printf("The value store in myIntPtr is %d\n", myIntPtr);
//	myInt = 108;
//	printf("The value stored in myInt is %d\n", myInt);
//	printf("The value stored in myInt by way of myIntPtr is %d\n", *myIntPtr);
//	*myIntPtr = 110;
//	printf("The value stored in myInt modified via  myIntPtr is %d\n", myInt);
////	printf("The value stored in myInt modified via  myIntPtr is %d\n", *myIntPtr);
//
//}
//
//void passByValue(int n) {
//	n += 1000;
//	printf("The value of n inside the functions is %d\n", n);
//}
//	
//void passByRef(int n) {
//	
//}

void passByValue(int);
void passByRef(int *);
void passAnArrayToModify(int arr[], int);
void printAnArray(int arr[], int size);


int main() {
	
	int myInt;
	int * myIntPtr; //when there's a * between a type and name of variabled, it indicates a pointer
	int n = 23;
	int myIntArray[N];
//	printf("The vaulue of n prior to calling function passing n by value is %d\n", n);
//	passByValue(n);
//	printf("The value of n inside the funtion is %d\n", n);
//	passByRef(&n);
//	printf("The value of n post to calling funtion passing n by reference is %d\n", n);
	printAnArray(myIntArray, N);
	passAnArrayToModify(myIntArray, N); //myintarray is an address. it stores the starting point of 0. no & needed because it is an address.
	printAnArray(myIntArray, N);


//	printf("The address of myInt is %d\n", &myInt);
//	myIntPtr = &myInt;
//	printf("The value store in myIntPtr is %d\n", myIntPtr);
//	myInt = 108;
//	printf("The value stored in myInt is %d\n", myInt);
//	printf("The value stored in myInt by way of myIntPtr is %d\n", *myIntPtr);
//	*myIntPtr = 110;
//	printf("The value stored in myInt modified via  myIntPtr is %d\n", myInt);
//	printf("The value stored in myInt modified via  myIntPtr is %d\n", *myIntPtr);

}

void passByValue(int n) {
	n += 1000;
	printf("The value of n inside the functions is %d\n", n);
}
	
void passByRef(int * n) {
	*n = 1456; //this assigns the address of the variable
	printf("The value of n inside the funtion is %d\n", *n);
	
}

//void passAnArrayToModify(int arr[], int size){
//	int ctr = 0;
//	for(ctr; ctr < size; ++ctr)
//		arr[ctr] = ctr + 10;	
//}

void passAConstantArrayToModify(int arr[], int size){
	int ctr = 0;
	for(ctr; ctr < size; ++ctr)
		arr[ctr];
		//arr[ctr] = ctr + 10;	
}

void printAnArray(int arr[], int size){
	int ctr = 0;
	for(ctr; ctr < size; ++ctr)
		printf("the value stored at the %d'th slot is %d\n", ctr, arr[ctr]);	
}