#include <stdio.h>
int main(void) {

float deposit1;
printf("Enter the amount you wish to deposit.\n");
	scanf("%f", &deposit1);
int menu = 0;
float balance = deposit1;
int choice;
scanf("%d", &choice);
do {
	printf(" 1) Deposit money. \n 2) Withdraw money. \n 3) Calculate interest. \n 4) Show current balance. \n 5) Quit. \n");
	int choice;
	scanf("%d", &choice);
while(menu > 5);

	if(choice == 1) {
		printf("Enter the amount you wish to deposit into your account.\n");
		float deposit;
		scanf("%f", &deposit);
		balance = balance + deposit;
	}

	if(choice == 4) {
		printf("%f\n", balance);
	}

	if(choice == 2) {
		printf("Enter the amount you wish to withdraw from your account.\n");
		float withdraw;
		scanf("%f", &withdraw);
		balance = balance - withdraw;
	}
	if(choice == 3) {
		printf("Calculating interest...\n");
		float interest = balance * .05;
		balance = balance + interest;
	}
	if(choice == 5); {
		return 0;
	}

}while(menu > 5);
return 0;
}

