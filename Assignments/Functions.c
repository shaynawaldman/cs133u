#include <stdio.h>
#include <stdlib.h>

/* FUNCTION PROTOTYES */
void WelcomeMessage();
void AskUserForInput();
void PrintTripSummary(float avgMiles, float minCost, float maxCost, float travelMiles);

int main()
{ 
/* Call the functions */ 
WelcomeMessage();
AskUserForInput();         
printf("\nThank you, please drive safely and have a nice trip!\n");       
return 0;
	}
	

void WelcomeMessage()
{
 printf("Welcome to the Trip Planner!");
	printf("So you are ready to take a trip? Let me help you plan for\n");
	printf("your fuels costs and required stops to fill up your tank.\n");
	printf("============================================================\n");
	printf("Please provide answers to the prompts below and I will\n");
	printf("display a summary for you when I have computed the results.\n");
	printf("============================================================\n");    
 }
void AskUserForInput()
{
float avgMiles, minCost, maxCost, travelMiles;
do{
	printf("Please input your car's average miles per gallon (enter 0 to quit) ");
	scanf("%f", &avgMiles);
	if(avgMiles == 0)
		break;
	printf("Please tell me the range of fuel costs you expect to pay (per gallon)\n");

	printf("The lowest per gallon cost of fuel is ");
	scanf("%f", &minCost);
	printf("The highest per gallon cost of fuel is ");
	scanf("%f", &maxCost);
	printf("Please tell me how many miles you plan to travel ");
	scanf("%f", &travelMiles);
	PrintTripSummary(avgMiles, minCost, maxCost, travelMiles);
}while(avgMiles != 0);
 }
 
 void PrintTripSummary(float avgMiles, float minCost, float maxCost, float travelMiles)
 {
 	printf("\n****************   Trip Summary   ****************\n");
	printf("You will need to purchase %.2f gallons of fuel.\n", (travelMiles/avgMiles));
	printf("The approximate cost of fuel for your trip is between $%.2f and $%.2f.\n", minCost*(travelMiles/avgMiles), maxCost*(travelMiles/avgMiles));
	printf("**************   End Trip Summary   **************\n\n");
 }