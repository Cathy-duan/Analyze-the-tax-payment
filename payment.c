#include<stdio.h>
#include<math.h>

/* Mengyue Duan
 *
 * First, enter the number of quarters, dimes, nickels, and pennies. Secondly, you can know the how much to covert to dollars and cents and the weight of all the coins. Third, it will change to different bills. Finally, you will know the minimal weight of grams and pounds.
 */
int main (void){

        const double QUARTERS_GRAMS = 5.67;
	const double DIME_GRAMS = 2.268;
	const double NICKEL_GRAMS = 5.0;
	const double PENNY_GRAMS = 2.5;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	int dollars;
	int cents;
	int twentydollar;
	int tendollar;
	int fivedollar;
	int onedollar;
	double pounds; 
	double total;
	int billsgrams;

	printf("Enter the number of quarters: ");
	scanf("%d", &quarters);
	printf("Enter the number of dimes: ");
        scanf("%d", &dimes);
        printf("Enter the number of nickels: ");
        scanf("%d", &nickels);
        printf("Enter the number of pennies: ");
        scanf("%d", &pennies);
        total = (quarters * 25 + dimes *10 + nickels *5 + pennies *1)/100.0;
	dollars = (quarters * 25 + dimes * 10 + nickels * 5 + pennies *1)/100;
	cents = (quarters * 25 + dimes * 10 + nickels * 5 + pennies * 1)%100;

	printf("\nTotal payment is ");
	printf("%d", dollars);
	printf(" dollars and ");
	printf("%d", cents);
	printf(" cents.\n");
        
	pounds = (quarters * QUARTERS_GRAMS + dimes * DIME_GRAMS + NICKEL_GRAMS * nickels + pennies * PENNY_GRAMS)*0.00220462;

	printf("Total weight of all the coins is ");
	printf("%lf", pounds);
	printf(" pounds.\n");
        printf("It is recommended to use the following payment form: \n");
        
	
	twentydollar = (int)round(total)/20;
	tendollar = ((int)round(total)%20)/10;
	fivedollar = (((int)round(total)%20)%10)/5;
	onedollar = (((int)round(total)%20)%10)%5;

	printf("\t%d twenty-dollar bills\n",twentydollar);
	printf("\t%d ten-dollar bills\n",tendollar);
	printf("\t%d five-dollar bills\n",fivedollar);
	printf("\t%d one-dollar bills\n",onedollar);

	billsgrams = twentydollar + tendollar + fivedollar + onedollar;
	printf("It achieves the minimal weight of %d grams or %lf pounds.", billsgrams, billsgrams*0.00220462);
        
        return 0;	

}
