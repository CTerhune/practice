#include <stdio.h>
int main(void) {

	int num1;
	scanf("%d" , &num1);
	if(num1 <= 5) {
		printf("Hello 0-5\n");
	}
	if(num1 >=5) {
		printf("Hello 5-Infinity\n");
	}
return 0;
}
