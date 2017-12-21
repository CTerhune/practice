#include <stdio.h>
int sum(int num1, int num2);
int product(int num1, int num2);
int box(int num1, int num2);
int gcf(int num1, int num2);
int main(void) {

int num1, num2;
printf("Enter two numbers to get the sum and product, and to make a box using those two numbers as the diameters.\n");
scanf("%d", &num1);
scanf("%d", &num2);
printf("The sum is %d\n", sum(num1, num2));
printf("The product is %d\n", product(num1, num2));
printf("The GCF is %d\n", gcf(num1, num2));
box(num1, num2);


return 0;
}
int sum(int num1, int num2) {
	return num1 + num2;
}
int product(int num1, int num2) {
	return num1 * num2;
}
int gcf(int num1, int num2) {
	if (num1 > num2) {
		for(num1 = 0; num1 < num2; num1++) {
		 	if(num1 % num1 = 0) {
				gcf = num1;
			}
		}
	}
return 0;
}
int box(int num1, int num2) {
	int i, j;
	for(i = 0; i < num2; i++) {
		for(j = 0; j < num1; j++) {
			printf("*");
		}
	printf("\n");
	}
return 0;
}
