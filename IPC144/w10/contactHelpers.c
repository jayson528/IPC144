/* -------------------------------------------
Name:Jayson Sherry
Student number:141056176
Email:jsherry1@myseneca.ca
Section:SRR
Date:           
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void) {
    while (getchar() != '\n'); // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
int getInt(void) {
	char NL = 'x';
	int Value;

	while (NL != '\n') {
		scanf("%d%c", &Value, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return Value;

}

// getIntInRange function definition goes here:
int getIntInRange(int num1, int num2) {
	int Value;

	do {
		Value = getInt();
		if (Value >= num1 && Value <= num2) {
			return Value;
		}
		else {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", num1, num2);
				
		}
	} while (Value <= num1 || Value >= num2); 
	return 0;
}


// yes function definition goes here:
int yes(void) {
	char NL;
	char oneLetter;

	do {
		scanf("%c%c", &oneLetter, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
	} while (NL != '\n');
	if (oneLetter == 'Y' || oneLetter == 'y') {
		return 1;
	}

	else {
		return 0;
	}
}

// menu function definition goes here:
	int menu(void) {
		int Value;
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
		Value = getIntInRange(0, 6);
		return Value;
}


// ContactManagerSystem function definition goes here:
	void ContactManagerSystem(void) {
		int Value = 10;
		
		while (Value != 0) {
			Value = menu();
			printf("\n");
			if (Value >= 1 && Value <= 6) {
				printf("<<< Feature %d is unavailable >>>", Value);
				printf("\n");
				printf("\n");
				pause();
				printf("\n");
			}
			else {
				printf("Exit the program? (Y)es/(N)o: ");
				if (yes() == 1) {
					printf("\nContact Management System: terminated\n");
									
				}
				else {
					printf("\n");
					ContactManagerSystem();
				}
			} 
			
		}
}
