/* -------------------------------------------
Name: Jayson Sherry
Student number:141056176
Email:jsherry1@myseneca.ca
Section:
Date:March 9 2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};
