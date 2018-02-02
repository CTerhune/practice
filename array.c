#include <stdio.h>
int main(void) {

	int i, sum, product, avg;
	int array[10];
	sum = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}
	for (i=0; i<10; i++) {
		printf("%d \n", &array[i]);
	}


        printf("\n");
        for(i=0; i<10; i++) {
		printf("%d" , &array[i]);
        }

	printf("\n");
	for(i=0; i<10; i++) {
		sum=sum+array[i];
	}
      


return 0;
}
