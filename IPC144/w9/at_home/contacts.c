/* -------------------------------------------
Name:jayson sherry
Student number:141056176
Email:jsherry1@myseneca.ca
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

char yesOrNo;

// ask user for contacts name info and store
void getName(struct Name* name) {
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]", name->firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yesOrNo);

	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]", name->middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name->lastName);
}

// ask user for contacts address info and store
void getAddress(struct Address *address) {
	printf("Please enter the contact's street number: ");
	scanf("%d", &(*address).streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", (*address).street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yesOrNo);

	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &(*address).apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", (*address).postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", (*address).city);
}

// ask user for contacts phone number info and store
void getNumbers(struct Numbers *numbers) {
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yesOrNo);
	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20[^\n]", (*numbers).cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yesOrNo);
	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %20[^\n]", (*numbers).home);
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yesOrNo);
	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %20[^\n]", (*numbers).business);
		printf("\n");	
	}
}
