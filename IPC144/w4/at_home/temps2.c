//jayson sherry
//141056176
//jsherry1@myseneca.ca
//IPC144 
//workshop 4, at home

#include<stdio.h>

int main(void){

int high[10];
int low[10];
int highestTemp=0,highestTempDay=0,lowestTemp=0,lowestTempDay=0,highAverage=0,lowAverage=0,averageInput=0,inputDays=0,i=0,flag=0;
float totalAverage = 0;

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
	scanf("%d",&high[i]);
	printf("Day %d - Low: ",i+1);
	scanf("%d",&low[i]);
	if (high[i]>highestTemp){
		highestTemp = high[i];
		highestTempDay = i+1;
	}
	if (low[i]<lowestTemp){
		lowestTemp = low[i];
		lowestTempDay = i+1;
	}
}

printf("\nDay  Hi  Low\n");
for (i=0; i < inputDays; i++){
	printf("%d    %d    %d\n",i+1,high[i],low[i]);
	}

printf("\nThe highest temperature was %d, on day %d\n",highestTemp,highestTempDay);
printf("The lowest temperature was %d, on day %d\n",lowestTemp,lowestTempDay);
while (flag == 0){
	printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ",inputDays);
	scanf("%d",&averageInput);
	if (averageInput > inputDays){
		while(averageInput > inputDays){
			printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ",inputDays);
			scanf("%d",&averageInput);
		}
	}
	if ((averageInput > 0) & (averageInput <= inputDays)){
		highAverage = 0;
		lowAverage = 0;
		for (i=0; i < averageInput;i++){
			highAverage = highAverage + high[i];
			lowAverage = lowAverage + low[i];
		}
		totalAverage = (float) (highAverage + lowAverage) / (averageInput * 2);
		printf("\nThe average temperature up to day %d is: %2.2f\n",averageInput,totalAverage);
	}	
	if (averageInput < 0){
		flag = 1;
		printf("\nGoodbye!\n");
	}
}
return 0;
}

