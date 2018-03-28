#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
int recursion(int a,int j, int i, char line[a]);
int main(void) {
        srand(getpid());
        int a, i;
        printf("Enter length of array\n");
        scanf("%d", &a);        
        char line[a];
                for (i = 0; i < a; i++) {
                        line[i] = '*';
                }

        int j = rand() % a;
        line[j] = 'X';
        for (i = 0; i < a; i++) {
                printf("%c", line[i]);
        } printf("\n");
recursion(0, 0 , 0, line);

return 0;
}

int recursion(int a,int j, int i, char line[a]) {
                if(line[a] == 'X') {
                        recursion(a, j-1, i+1, line);
		} else if(/*something*/) {
			recursion(a, j+1, i+1, line);
		}
}


