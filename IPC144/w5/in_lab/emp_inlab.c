/*
Name:Jayson sherry
Student number:141056176
Email:jsherry1@myseneca.ca
Workshop: workshop 5 in lab
Section: CPA
Date: 2018/02/20
*/


#include <stdio.h>
#define SIZE 2

struct Employee {
	int id;
	int age;
	double salary;
};

int main(void){
int option = 0;
int counter = 0;
struct Employee emp[SIZE] ={{0}};

printf("---=== EMPLOYEE DATA ===---\n");
	do{// Print the option list
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);

		switch (option){
		case 0:	// Exit the program
			printf("\nExiting Employee Data Program. Good Bye!!!\n");
			break;
		
		case 1: // Display Employee Data
			printf("\nEMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			int i = 0;
			for (i = 0; i < SIZE; i++) {
				if (emp[i].id > 0 && emp[i].age > 0 && emp[i].salary > 0)
				printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
			break;
		
		case 2:// Add New Employee	
			printf("\nAdding Employee\n");
			printf("===============\n");
			if ((emp[counter].id <= 0) || (emp[counter].age <= 0) || (emp[counter].salary <= 0)){
				printf("Enter Employee ID: ");
				scanf("%d",&emp[counter].id);
				printf("Enter Employee Age: ");
				scanf("%d",&emp[counter].age);
				printf("Enter Employee Salary: ");
				scanf("%lf",&emp[counter].salary);
				counter++;
				break;
			}
			if (counter >= SIZE){
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}
			break;
		
		default:{
		printf("\nERROR: Incorrect Option: Try Again\n\n");
		}
		}
	} while (option != 0);
return 0;
}

