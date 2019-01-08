//jayson sherry
//141056176
//jsherry1@myseneca.ca
//IPC144 
//workshop 3, in lab

#include<stdio.h>
#define NUMS 3

int main(void){
int i;
int high=0,low=0;
int totalHigh=0,totalLow=0;
float averageTemps;

printf("---=== IPC Temperature Analyzer ===---");
	
	for (i=0;i<NUMS;++i){
		 do{  	
			printf("\nEnter the high value for day %d: ",i+1);
			scanf("%d",&high);
			printf("\nEnter the low value for day %d: ",i+1);
			scanf("%d",&low);
			if (high < low || low < -40 || high > 40)
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
		 	//totalHigh = totalHigh  + high;
			//totalLow = totalLow + low;
			//averageTemps = (float)(totalHigh + totalLow) / (NUMS * 2);
		 }while (high < low || low < -40 || high > 40);
			totalHigh = totalHigh + high;
			totalLow = totalLow + low;
		       averageTemps = (float)(totalHigh + totalLow) / (NUMS * 2);	
		}

	

printf("\nThe average (mean) temperature was: %2.2f\n",averageTemps);
return 0;
}

