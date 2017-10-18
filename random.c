#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	int main(void) {
	srand(getpid());
	int numb1 = rand() % 59;
	int numb2 = numb1 + 1;
	int numb3 = rand() % 59 + 1;
	int numb4 = rand() % 59 +1;
	printf("Today's winning numbers are %d, %d, and %d. Have a great day!\n", numb2, numb3, numb4);
	return 0;
}
