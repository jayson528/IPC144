/*
Name:Jayson sherry
Student number:141056176
Email:jsherry1@myseneca.ca
Workshop: workshop 5 at home
Section: CPA
Date: 2018/02/23
*/


#include <stdio.h>
#define SIZE 4

struct Employee {
	int id;
	int age;
	double salary;
};

int main(void){
int option = 0;
int counter = 0;
int IDscan = 0;
int flag = 0;
int i = 0;
struct Employee emp[SIZE] ={{0}};

printf("---=== EMPLOYEE DATA ===---");
printf("\n");
printf("\n");
	do{// Print the option list
		printf("1. Display Employee Information");
		printf("\n");
		printf("2. Add Employee");
		printf("\n");
		printf("3. Update Employee Salary");
		printf("\n");
		printf("4. Remove Employee");
		printf("\n");
		printf("0. Exit");
		printf("\n");
		printf("\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);

		switch (option){
		case 0:	// Exit the program
			printf("\n");
			printf("Exiting Employee Data Program. Good Bye!!!");
			printf("\n");
			break;
		
		case 1: // Display Employee Data
			printf("\n");
			printf("EMP ID  EMP AGE EMP SALARY");
			printf("\n");
			printf("======  ======= ==========");
			printf("\n");
			for (i = 0; i < SIZE; i++) {
				if (emp[i].id > 0 && emp[i].age > 0 && emp[i].salary > 0)
				printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}
			printf("\n");
			break;
		
		case 2:// Add New Employee
			printf("\n");
			printf("Adding Employee");
			printf("\n");
			printf("===============");
			printf("\n");
			if (counter < SIZE){
			       for (i = 0; i < SIZE; i++){ 	
					if ((emp[i].id <= 0) || (emp[i].age <= 0) || (emp[i].salary <= 0)){
						printf("Enter Employee ID: ");
						scanf("%d",&emp[i].id);
						printf("Enter Employee Age: ");
						scanf("%d",&emp[i].age);
						printf("Enter Employee Salary: ");
						scanf("%lf",&emp[i].salary);
						counter++;
						break;
					}
				}
			}
			else if (counter >= SIZE){
				printf("ERROR!!! Maximum Number of Employees Reached");
				printf("\n");
			}
			printf("\n");
			break;
		
		case 3: // Update Employee Salary
			printf("\n");
			printf("Update Employee Salary");
			printf("\n");
			printf("======================");
			printf("\n");
			do{
				printf("Enter Employee ID: ");
				scanf("%d",&IDscan);
				for(i = 0; i < SIZE; i++){
					if(IDscan == emp[i].id){
						flag = 0;
						printf("The current salary is %7.2lf",emp[i].salary);
						printf("\n");
						printf("Enter Employee New Salary: ");
						scanf("%lf",&emp[i].salary);
						printf("\n");
						break;
					}
				flag = 1;
				}
			} while (flag != 0);
			break;

		case 4: // Remove Employee
			printf("\n");
			printf("Remove Employee");
			printf("\n");
			printf("===============");
			printf("\n");
			do{	
				printf("Enter Employee ID: ");
				scanf("%d",&IDscan);
				for(i = 0; i < SIZE; i++){
					if(IDscan == emp[i].id){ 
						flag = 0;
						emp[i].id = 0;
						emp[i].age = 0;
						emp[i].salary = 0;
						printf("Employee %d will be removed",IDscan);
						printf("\n");
						counter--;
						printf("\n");
						break;
					}
				flag = 1;
				}
			}while (flag != 0);
			break;

		
		default:{
		printf("\n");
		printf("ERROR: Incorrect Option: Try Again");
		printf("\n");
		printf("\n");
		}
		}
	} while (option != 0);
return 0;
}

