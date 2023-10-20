#include<stdio.h>
int main(){
	int num = 5;
	int i, j;
	for (i = 0; i < num; i++) {
		for (j = num - 1; j > i; j--) {
			printf(" ");
		}

		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
