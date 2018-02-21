#include <stdio.h>
int main(void) {
	int times[10];
	int i;
	for(i = 0; i < 10; i++) {
		scanf("%d", &times[i]);
		if(i % 2 == 1 && i < 9) {
			printf("Next race\n");
		} else if(i > 8) {
			printf("This is the end\n");
		}
	}
	
return 0;
}
