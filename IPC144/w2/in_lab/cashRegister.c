/*jayson sherry
141056176
jsherry1@myseneca.ca
*/


#include<stdio.h>

int main(void){

	int quarters;
	int loonies;
	double amount;
	double newAmount;
	double newAmount2;

	printf("Please enter the amount to be paid: $");
	scanf("%lf",&amount);
	
	//calculate loonies
	loonies = (int)amount / 1;
	newAmount = amount - (loonies * 1);
	
	//calculate quarters
	quarters = (int) (newAmount / .25);
       
	newAmount2 = newAmount - (quarters * 0.25);

	printf("Loonies required: %d,",loonies);
	printf(" balance owing $%.2f\n",newAmount);
	printf("Quarters required: %d,",quarters);
	printf(" balance owing $%.2f\n",newAmount2);      
	 return 0;
}
