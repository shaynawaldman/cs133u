/*
Prompts the user for 2 strings (<= 100 characters).
Check if the two strings are anagrams
The check has to be case-insensitive.
Print the result along with the strings
Ask the user whether they want to continue.
Y or y to continue (Repeat steps 1- 2)
Any other character to quit
*/

#include <stdio.h>

int main(void) {
	
	char string1[100]={0};
	char string2[100]={0};
	int string1length=0;
	int string2length=0;
	char string1Char;
	char string2Char;
	int notfound=0;
		
	printf("Enter two strings that are <= 100 characters:\n");
	scanf("%s %s", &string1, &string2);
	printf("string1 is %s and string2 is %s\n", string1, string2);
	
	for (int idx=0; idx<100; idx++){
		if(string1[idx] != '\0'){
			string1length++;
		}
	}
	
	for (int idx=0; idx<100; idx++){
		if(string2[idx] != '\0'){
			string2length++;
		}
	}
		printf("string1 length is %i and string2 length is %i\n", string1length,string2length);
	
	if (string1length != string2length){
		printf("Strings are not anagrams.");
		return 1;
	} else {
		for (int idx=0; idx<string1length; idx++){
			if (notfound==1){
			printf("not an anagram\n");
			} else {
				for (int idx2=0; idx2<string2length; idx2++){
					if (string1[idx]==string2[idx2]){
						printf("maybe an anagram\n");
						idx2=string2length;
					}
					else if (idx2==string1length-1){
						notfound=1;
						printf("%d\n", notfound);

					}
				}
			}
		}
	}
	
	

}