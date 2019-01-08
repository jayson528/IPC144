//jayson sherry
//141056176
//jsherry1@myseneca.ca
//IPC144 
//workshop 4, in lab

#include<stdio.h>
#define NUMS 4

int main(void){

int inputDays;
int High[10];
int Low[10];
int i = 0;
printf("---=== IPC Temperature Calculator V2.0 ===---\n");

		printf("Please enter the number of days, between 3 and 10, inclusive: ");
		do{
			scanf("%d",&inputDays);
			if (inputDays < 3 || inputDays > 10){
				printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
						
			}
		}while (inputDays < 3 || inputDays > 10);

		printf("\n");
		for (i=0;i < inputDays ;i++){  	
			printf("Day %d - High: ",i+1);
			scanf("%d",&High[i]);
			printf("Day %d - Low: ",i+1);
			scanf("%d",&Low[i]);
		}

printf("\nDay  Hi  Low\n");
	for (i=0; i < inputDays; i++){
		printf("%d    %d    %d\n",i+1,High[i],Low[i]);
		}
	return 0;
}

