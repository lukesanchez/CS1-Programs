/*******************************************************************
This program Outputs the exact amount of each change denomination
for a given user input. 

Created by: Luke Sanchez	
Created on: Sept. 26 2019    	
*******************************************************************/ 
#include <stdio.h>

int main(void) {
	float inputedMoney = 0;
	int totalcents, dollars, quarters, dimes, nickles, pennies = 0;


	printf("\nPlease enter a dollar amount:$");
	scanf("%f", &inputedMoney);

	totalcents = inputedMoney * 100;
	dollars = totalcents / 100;
	totalcents %= 100;
	quarters = totalcents / 25;
	totalcents %= 25;
	dimes = totalcents / 10;
	totalcents %= 10;
	nickles = totalcents / 5;
	totalcents %= 5;
	pennies = totalcents / 1;
	totalcents %= 1;

	if(dollars == 1)
		printf("%d Dollar\n", dollars);
	else
		printf("%d Dollars\n", dollars);
	printf("%d Quarters\n", quarters);
	printf("%d Dimes\n", dimes);
	printf("%d Nickles\n", nickles);
	printf("%d Pennies\n", pennies);
	return 0;
}
