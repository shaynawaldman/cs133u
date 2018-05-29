/*
Create a program called structs.c that does the following:

Create an array that contains ten (10) variables of the following type:
typedef struct {
	char firstName[30];
	char lastName[30];
	char street[35];
	char city[20];
	char state[3];
	int zip;
	char phone[15];
	int accountId;
} Customer;

Prompt the user for values for each of the variables in each structure, i.e. you will be asking for 10 firstName values, 10 lastName values, and so forth. HINT: Loops...
After all of the values for the structure variables have been input, you need to prompt the user for a state string, and then display the values of all variables in each structure where the state string matches the user's input.Use functions if you feel comfortable but are not mandatory for this assignment.
You can assume that the user always enters proper data - no input validation is required. Also all the strings are words without spaces, i.e you are expected to read  the string using scanf("%s") and not gets or fgets

Sample Output

Enter Data for Customer 0
Enter First Last Phone: Doug Oregon 123-456-7890
Enter Address (Street City State ZIP): Main Portland OR 12345

Enter Data for Customer 1
Enter First Last Phone: Doug Washington 123-456-7890
Enter Address (Street City State ZIP): Main Portland WA 12345

Enter Data for Customer 2
Enter First Last Phone: Doug California 123-456-7890
Enter Address (Street City State ZIP): Main Portland CA 12345

Enter Data for Customer 3
Enter First Last Phone: Doug Nevada 123-456-7890
Enter Address (Street City State ZIP): Main Portland NV 12345

Enter Data for Customer 4
Enter First Last Phone: Doug Colorado 123-456-7890
Enter Address (Street City State ZIP): Main Portland CO 12345

Enter Data for Customer 5
Enter First Last Phone: Another Colorado 123-456-7890
Enter Address (Street City State ZIP): Main Portland CO 12345

Enter Data for Customer 6
Enter First Last Phone: Doug Arizona 123-456-7890
Enter Address (Street City State ZIP): Main Portland AZ 12345

Enter Data for Customer 7
Enter First Last Phone: Doug Florida 123-456-7890
Enter Address (Street City State ZIP): Main Portland FL 12345

Enter Data for Customer 8
Enter First Last Phone: Doug Georgia 123-456-7890
Enter Address (Street City State ZIP): Main Portland GA 12345

Enter Data for Customer 9
Enter First Last Phone: Doug Jones 123-456-7890
Enter Address (Street City State ZIP): Main Portland CO 12345

Enter 2-character state code: CO
Data for Customer 4
Account: 4
Name: Doug Colorado
Addr: Main Portland CO 12345
Phone: 123-456-7890

Data for Customer 5
Account: 5
Name: Another Colorado
Addr: Main Portland CO 12345
Phone: 123-456-7890

Data for Customer 9
Account: 9
Name: Doug Jones
Addr: Main Portland CO 12345
Phone: 123-456-7890
*/

#include <stdio.h>
char i;
req_info();

int main(int argc, char *argv[]) {

	char firstName[30], lastName[30], street[35], city[20], state[3]; 
	int zip, phone[15], accountId;
	
	struct record {
		firstName[30], lastName[30], street[35], city[20], state[3], zip, phone[15], accountId;
	} Customer;
	
	req_info();
	printf("%d", &req_info());

}	

req_info() {
	printf("Please enter the following information for the customer record:\n");
	printf("First name and last name: \n");
	scanf("%s%s", &firstName, &lastName);
	printf("Street: \n");
	scanf("%s", &street);
	printf("City: \n");
	scanf("%s", &city);
	printf("State: \n");
	scanf("%s", &state);
	printf("Zip: \n");
	scanf("%i", &zip);
	printf("Phone: \n");
	scanf("%s", &phone);
	printf("Account ID: \n");
	scanf("%s", &accountID);
}