/* -------------------------------------------
Name:jayson
Student number:141056176
Email:jsherry1@myseneca.ca
Section:
Date: march 9 2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

int main (void){

    	// Declare variables here:
	struct Name contact;
	struct Address addressInfo;
	struct Numbers phoneNumbers;
	char yesOrNo;


		// Display the title
		printf("Contact Management System");
		printf("\n");
		printf("-------------------------");
		printf("\n");


		// Input contact name
		printf("Please enter the contact's first name: ");
		scanf(" %30s", contact.firstName);

		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf(" %c", &yesOrNo);
		
		if (yesOrNo == 'y' || yesOrNo == 'Y') {
			printf("Please enter the contact's middle initial(s): ");
			scanf(" %6s", contact.middleInitial);
		}
		printf("Please enter the contact's last name: ");
		scanf(" %35s", contact.lastName);
		
		
		
		// Input address for contact
		printf("Please enter the contact's street number: ");
		scanf(" %d", &addressInfo.streetNumber);
		
		printf("Please enter the contact's street name: ");
		scanf(" %40[^\n]", addressInfo.street);
		
		printf("Do you want to enter an appartment number? (y or n): ");
		scanf(" %c", &yesOrNo);
		
		if (yesOrNo == 'y' || yesOrNo == 'Y') {
			printf("Please enter the contact's appartment number: ");
			scanf("%d", &addressInfo.apartmentNumber);
		}
		printf("Please enter the contact's postal code: ");
		scanf(" %7[^\n]", addressInfo.postalCode);
		

		printf("Please enter the contact's city: ");
		scanf(" %40[^\n]", addressInfo.city);
		
		
		
		// Input numbers for contact
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf(" %c", &yesOrNo);
		if (yesOrNo == 'y' || yesOrNo == 'Y') {
			printf("Please enter the contact's cell phone number: ");
			scanf(" %20[^\n]", phoneNumbers.cell);
		}
		
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf(" %c", &yesOrNo);
		if (yesOrNo == 'y' || yesOrNo == 'Y') {
			printf("Please enter the contact's home phone number: ");
			scanf(" %20[^\n]", phoneNumbers.home);
		}
		
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf(" %c", &yesOrNo);
		if (yesOrNo == 'y' || yesOrNo == 'Y') {
			printf("Please enter the contact's business phone number: ");
			scanf(" %20[^\n]", phoneNumbers.business);
		}
		printf("\n");
		
		// Print all info for contact
		printf("Contact Details");
		printf("\n");
		printf("---------------");
		printf("\n");
		
		printf("Name Details");
		printf("\n");
		printf("First name: %s", contact.firstName);
		printf("\n");
		printf("Middle initial(s): %s", contact.middleInitial);
		printf("\n");
		printf("Last name: %s", contact.lastName);
		printf("\n");
		printf("\n");
		
		printf("Address Details");
		printf("\n");
		printf("Street number: %d", addressInfo.streetNumber);
		printf("\n");
		printf("Street name: %s", addressInfo.street);
		printf("\n");
		printf("Apartment: %d", addressInfo.apartmentNumber);
		printf("\n");
		printf("Postal code: %s", addressInfo.postalCode);
		printf("\n");
		printf("City: %s", addressInfo.city);
		printf("\n");
		printf("\n");
		
		printf("Phone Numbers:");
		printf("\n");
		printf("Cell phone number: %s", phoneNumbers.cell);
		printf("\n");
		printf("Home phone number: %s", phoneNumbers.home);
		printf("\n");
		printf("Business phone number: %s", phoneNumbers.business);
		printf("\n");
		printf("\n");
		printf("Structure test for Name, Address, and Numbers Done!");
		printf("\n");
		printf("\n");
return 0;
}

