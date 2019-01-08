/* -------------------------------------------
Name:jayson sherry
Student number: 141056176
Email: jsherry1@myseneca.ca
Section:        
Date:           
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contacts.h"
#include "contactHelpers.h"


// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
void clearKeyboard(void) {
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause:
void pause(void) {
	printf("(Press Enter to Continue)");
	printf("\n");
	clearKeyboard();
}

// getInt:
int getInt(void) {
	char NL = 'x';
	int value;

	while (NL != '\n') {
		scanf("%d%c", &value, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <please enter an integer>: ");
		}
	}
	return value;
}

// getIntInRange:
int getIntInRange(int num1, int num2) {
	int value;
	
	do {
		value = getInt();
		if (value >= num1 && value <= num2) {
			return value;
		}
		else {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", num1, num2);
		}
	} while (value <= num1 || value >= num2);
return value;
}

// yes:
int yes(void) {
	char NL;
	char oneLetter;

	do {
		scanf("%c%c", &oneLetter, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <only (Y)es or (N)o are acceptable>: ");
		}
	} while (NL != '\n');
	
	if (oneLetter == 'Y' || oneLetter == 'y') {
		return 1;
	}
	else {
		return 0;
	}

}

// menu:
int menu(void) {
	int value;
	
//	printf("\n");
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");
	value = getIntInRange(0, 6);
	printf("\n");
	return value;
	
}

// ContactManagerSystem:
void ContactManagerSystem(void) {
	int value = 10;
	struct Contact contacts[MAXCONTACTS] = {
		{
			{ "Rick",{ '\0' }, "Grimes" },
			{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
			{ "4161112222", "4162223333", "4163334444" }
		},

		{
			{ "Maggie", "R.", "Greene" },
			{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
			{ "9051112222", "9052223333", "9053334444" }
		},

		{
			{ "Morgan", "A.", "Jones" },
			{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
			{ "7051112222", "7052223333", "7053334444" }
		},

		{
			{ "Sasha",{ '\0' }, "Williams" },
			{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
			{ "9052223333", "9052223333", "9054445555" }
		},
	};

	while (value != 0) {
		value = menu();
		
		switch (value) {

		case 1:
			displayContacts(contacts,MAXCONTACTS);
			break;
		
		case 2:
			addContact(contacts,MAXCONTACTS);
			break;
		
		case 3:
			updateContact(contacts, MAXCONTACTS);
			break;
		
		case 4: 
			deleteContact(contacts, MAXCONTACTS);
			break;
		
		case 5:
			searchContacts(contacts, MAXCONTACTS);
			break;
		
		case 6:
		//	sortContacts();
			printf("<<< Feature to sort is unavailable >>>");
			printf("\n");
			break;
	
		case 0:	printf("Exit the program? (Y)es/(N)o: ");
			if (yes() == 1) {
				printf("\n");
				printf("Contact Management System: terminated");
				printf("\n");
				break;
			}

		default:	
			printf("\n");
			ContactManagerSystem();

		}
	}
}

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[]) {
	int needInput = 1;

	while (needInput == 1) {
		scanf(" %10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10) {
			needInput = 0;
		}
		else {
			printf("Enter a 10-digit phone number: ");
		}
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[]) {
	int i;
		
	for (i = 0; i < size; i++) {
		if (strcmp(contacts[i].numbers.cell, cellNum) == 0) {
			return i;
		}	
	}
return -1;
}


// displayContactHeader
void displayContactHeader(void) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}

// displayContactFooter
void displayContactFooter(int num) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d", num);
	printf("\n");
	printf("\n");
}


// displayContact:
void displayContact(const struct Contact * contact) {
	if (strlen(contact->name.middleInitial) == 0) {
	printf(" %s %s",contact->name.firstName, contact->name.lastName);
	printf("\n");
	}	
	else {	
	printf(" %s %s %s",contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
	printf("\n");
	}
	printf("    C: %-10s   H: %-10s   B: %-10s",contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	printf("\n");
	
	if (contact->address.apartmentNumber > 0) {
		printf("       %d %s, Apt# %d, %s, %s", contact->address.streetNumber, contact->address.street, contact->address.apartmentNumber, contact->address.city, contact->address.postalCode);
		printf("\n");
	}
	else {
		printf("       %d %s, %s, %s", contact->address.streetNumber, contact->address.street, contact->address.city, contact->address.postalCode);
		printf("\n");
	}
}

// displayContacts:
void displayContacts(const struct Contact contact[], int num) {
	int i;
	int validContacts = 0;

	displayContactHeader();
	
	for (i = 0; i < num; i++) {
		if (strlen(contact[i].numbers.cell) > 0) {
			displayContact(&contact[i]);
			validContacts++;
		}
	}

displayContactFooter(validContacts);
pause();
}


// searchContacts:
void searchContacts(const struct Contact contact[], int num) {
	char cellNum[11];
	int indexNum;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellNum);
	indexNum = findContactIndex(contact, MAXCONTACTS, cellNum);
	printf("\n");	
	if (indexNum != -1) {
		displayContact(&contact[indexNum]);
		printf("\n");
	}
	else {
		printf("*** Contact NOT FOUND ***");
		printf("\n");	
	}
pause();
}

// addContact:
void addContact(struct Contact contact[], int num) {
	int i;
	int added = 0;

	for (i = 0; i < num; i++) {
		if (strlen(contact[i].numbers.cell) == 0) {
			getContact(&contact[i]);
			printf("--- New contact added! ---");
			printf("\n");
			added = 1;
			break;
		}
	}
	
	if (added == 0) {
		printf("*** ERROR: The contact list is full! ***");
		printf("\n");
	}

pause();
}

// updateContact:
void updateContact(struct Contact contact[], int num) {
	char cellNum[11];
	int indexNum;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellNum);
	indexNum = findContactIndex(contact, MAXCONTACTS, cellNum);

	if (indexNum != -1) {
		printf("\n");
		printf("Contact found:");
		printf("\n");
		displayContact(&contact[indexNum]);
		printf("\n");
		
		printf("Do you want to update the name? (y or n): ");
		if (yes() == 1) {
			getName(&contact[indexNum].name);
			clearKeyboard();
		}
		
		printf("Do you want to update the address? (y or n): ");
		if (yes() == 1) {
			getAddress(&contact[indexNum].address);
			clearKeyboard();
		}
	
		printf("Do you want to update the numbers? (y or n): ");
		if (yes() == 1) {	
			getNumbers(&contact[indexNum].numbers);	
		}
		
		printf("--- Contact Updated! ---");
		printf("\n");
	}
	else {
		printf("*** Contact NOT FOUND ***");
		printf("\n");
	}

pause();
}

// deleteContact:
void deleteContact(struct Contact contact[], int num) {
	char cellNum[11];
	int indexNum;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellNum);
	indexNum = findContactIndex(contact, MAXCONTACTS, cellNum);

	if (indexNum != -1) {
		printf("\n");
		printf("Contact found:");
		printf("\n");
		displayContact(&contact[indexNum]);
		printf("\n");
		
		printf("CONFIRM: Delete this contact? (y or n): ");
		if (yes() == 1) {
			*contact[indexNum].numbers.cell = '\0';
			printf("--- Contact deleted! ---");
			printf("\n");
		}
	}

pause();
}

// sortContacts:
void sortContacts(struct Contact contact[], int num) {


}






