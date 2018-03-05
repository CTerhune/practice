#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {


printf("Enter the dimensions of the board\n");
int a, b, m;
char junk, v;
scanf("%d", &a);
scanf("%d", &b);

int i, j;
char box[a][b];

	for (i = 0; i < a; i++) {
        	for (j = 0; j < b; j++) {
                	box[i][j] = '*';
		}
	}



	srand(getpid());
	int num1 = rand() % a;
	int num2 = rand() % b;
	int num3 = rand() % a;
	int num4 = rand() % b;
	box[num1][num2] = 'P';
	box[num3][num4] = 'X';



	for (i = 0; i < a; i++) {
	        for (j = 0; j < b; j++) {
	                printf("%c", box[i][j]);
	        } printf("\n");
	}

	for(m = 0; m < 30; m++) {
		printf("Enter your move\n");
		scanf("%c", &junk);
		scanf("%c", &v);
			if(v == 'w') {
				num4++;
			}
			if(v == 'a') {
				num3--;
			}
			if(v == 'd') {
				num3++;
			}
			if(v == 's') {
				num4--;
			}

		box[num3][num4] = 'X';

	        for (i = 0; i < a; i++) {
        	        for (j = 0; j < b; j++) {
                	        printf("%c", box[i][j]);
	                } printf("\n");
	        }


        }

	if(box[num1][num2] == box[num3][num4]) {
		printf("You just earned a point\n");
	}


return 0;
}

