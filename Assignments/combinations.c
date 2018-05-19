#include <stdio.h>

int main() {
	/*
	1) Input 1.
		a) Ask for n. Check for bounds (1 <= n && n <= 10).
			i)  If the user entered an integer within (1 and 10), move on to getting the value for k
			ii) Else keep asking the user till they give a correct value which is an integer within 1 and 10.
			iii) Reject any input greater than 10 or less than 1 by displaying an error message and then asking the user to re-enter the input. Do this as many times that they enter incorrect input.
	2) Input 2.
		a) Ask for k. Check for bounds (1 <= k && k <= n).
			i) If the user entered an integer within (1 and k), move on to next step.
			ii) Else keep asking the user till they give a correct value which is an integer within 1 and n.
			iii) Reject any input greater than n or less than 1 by displaying an error message and then asking the user to re-enter the input. Do this as many times that they enter incorrect input.
	3) Calculate n – k.
	4) Calculate factorial of n, k and n – k.
	5) Calculate the Combination by plugging in  factorial of n / (factorial of k * factorial of n - k)
	6) Output
		a) Print 5, the number of combinations of n things taken k at a time. This is the output of your program.

	Assume that all of the internal calculations can be done using integers, i.e. don't worry about integer overflow.

	Sample Output
	Enter the number of items in the list (n):-1
	?Invalid input: Number must be between 1 and 10
	Enter the number of items in the list (n):11
	?Invalid input: Number must be between 1 and 10
	Enter the number of items in the list (n):4
	Enter the number of items to choose (k):0
	?Invalid input: Number must be between 1 and 4
	Enter the number of items to choose (k):99
	?Invalid input: Number must be between 1 and 4
	Enter the number of items to choose (k):3
	Number of combinations: 4
	*/
	
	int n, k, result;
	{
		nvalue:
		printf("Enter the number of items in the list (n): ");
		scanf("%d", &n);
		if (n < 1 || n > 10 ) {
			printf("Invalid input: Number must be between 1 and 10\n"); goto nvalue;
			}
	}
	
	{
		kvalue:
		printf("Enter the number of items to choose (k): ");
		scanf("%d", &k);
		if (k < 1 || k > n ) {
			printf("Invalid input: Number must be between 1 and %d\n", n); goto kvalue;
			}
	}
		
	result = n - k;
//	printf("%d\n", result);
	
	int nfactorial = n;
		for (int c = n; c > 1; c--)
			nfactorial = nfactorial * (c - 1);
//			printf("The factorial of %d is %d", n, nfactorial);
	int kfactorial = k;
		for (int c = k; c > 1; c--)
			kfactorial = kfactorial * (c - 1);
//			printf("The factorial of %d is %d", n, kfactorial);
		
	int resultfactorial = result;
		for (int c = result; c > 1; c--)
			resultfactorial = resultfactorial * (c - 1);
//			printf("The factorial of %d is %d", n, resultfactorial);
//	printf("The factorial of each is:\nn: %d\nk: %d\nn - k: %d", nfactorial, kfactorial, resultfactorial);
	printf("Number of combinations: %d\n", nfactorial / (kfactorial*resultfactorial));
return 0;
}

