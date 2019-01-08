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

int main(void){
    
	struct Contact contacts = {
				  {"","",""},
				  {0, "", 0, "", ""},
			      	  {"", "", ""}
	};

    // Display the title
	printf("Contact Management System");
	printf("\n");
	printf("-------------------------");
	printf("\n");

    // Call the Contact function getName to store the values for the Name member
	getName (&contacts.name);

    // Call the Contact function getAddress to store the values for the Address member
	getAddress(&contacts.address);

    // Call the Contact function getNumbers to store the values for the Numbers member
	getNumbers(&contacts.numbers);

    // Display Contact summary details
	printf("Contact Details");
	printf("\n");
	printf("---------------");
	printf("\n");
	
	printf("Name Details");
	printf("\n");
	printf("First name: %s", contacts.name.firstName);
	printf("\n");
	printf("Middle initial(s): %s", contacts.name.middleInitial);
	printf("\n");
	printf("Last name: %s", contacts.name.lastName);
	printf("\n");
	printf("\n");

	printf("Address Details");
	printf("\n");
	printf("Street number: %d", contacts.address.streetNumber);
	printf("\n");
	printf("Street name: %s", contacts.address.street);
	printf("\n");
	printf("Apartment: %d", contacts.address.apartmentNumber);
	printf("\n");
	printf("Postal code: %s", contacts.address.postalCode);
	printf("\n");
	printf("City: %s", contacts.address.city);
	printf("\n");
	printf("\n");
	
	printf("Phone Numbers:");
	printf("\n");
	printf("Cell phone number: %s", contacts.numbers.cell);
	printf("\n");
	printf("Home phone number: %s", contacts.numbers.home);
	printf("\n");
	printf("Business phone number: %s", contacts.numbers.business);
	printf("\n");
	printf("\n");
	printf("Structure test for Contact using functions done!");
	printf("\n");
	printf("\n");
	
    // Display Completion Message
    printf("Structure test for Contact using functions done!\n");
    
    return 0;
}
