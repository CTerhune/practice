#include <stdio.h>
int main(void) {

float deposit1;
float balance = 0;
/*float balance = deposit1 + deposit || deposit1 - withdraw || deposit1 + deposit1 * .5;*/
printf("Enter the amount you wish to deposit.\n");
	scanf("%f", &deposit1);
int menu = 0;
do {
	printf(" 1) Deposit money. \n 2) Withdraw money. \n 3) Calculate interest. \n 4) Show current balance. \n 5) Quit. \n");
} while (menu > 5);
	int choice;
	scanf("%d", &choice);


if(choice == 1) {
	printf("Enter the amount you wish to deposit into your account.\n");
	float deposit;
	scanf("%f", &deposit);
	balance = deposit1 + deposit;
}

if(choice == 4) {
	printf("%f", &balance);
}
return 0;
}
