/*jayson sherry
141056176
jsherry1@myseneca.ca
IPC144
*/


#include<stdio.h>

int main(void){
	
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	float inputAmount;
	float totalAmount;
	float amountAfterLoonies=0;
	int looniesRequired=0;
	int remainingAmount=0;
	float amountAfterQuarters=0;
	float amountAfterDimes=0;
	float amountAfterNickels=0;
	float amountAfterPennies=0;
	

	printf("Please enter the amount to be paid: $");
	scanf("%f",&inputAmount);
	printf("GST: 1.13\n");

	//calculate total with tax
	totalAmount = inputAmount * 1.13 + .005;
	printf("Balance owing: $%.2f\n",totalAmount);
	
	//calculate loonies needed
	looniesRequired = (int)totalAmount;

	//calculate amount after loonies are paid
	amountAfterLoonies = totalAmount - looniesRequired; /use float on loonies
	remainingAmount = amountAfterLoonies * 100;

	//calculate quarters needed
	quarters = remainingAmount / 25;
       	
	//calculate amount after quarters are paid 
	amountAfterQuarters = remainingAmount % 25; 	
	
	//calculate dimes needed
	remainingAmount =  amountAfterQuarters;
        dimes = remainingAmount / 10;	

	//calculate amount after dimes are paid
	amountAfterDimes = remainingAmount % 10;
	remainingAmount = amountAfterDimes;
	
	//calculte nickles needed 
	nickels = remainingAmount / 5;
	amountAfterNickels = remainingAmount % 5;

	//calculate pennies needed
	remainingAmount = amountAfterNickels;
	pennies = remainingAmount / 1;
	amountAfterPennies = remainingAmount % 1;
	
	
	printf("Loonies required: %d,",looniesRequired);
	printf(" balance owing $%.2f\n",amountAfterLoonies);
	printf("Quarters required: %d,",quarters);
	printf(" balance owing $%1.2f\n",(float)amountAfterQuarters/100);
  	printf("Dimes required: %d,",dimes);
	printf(" balance owing $%1.2f\n",(float)amountAfterDimes/100);
	printf("Nickels required: %d,",nickels);
	printf(" balance owing $%1.2f\n",(float)amountAfterNickels/100);
	printf("Pennies required: %d,",pennies);
	printf(" balance owing $%1.2f\n",(float)amountAfterPennies/100);	
	 return 0;
}
