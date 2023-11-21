#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dice1, dice2;
	int frequencies[13] = { 0 };

	srand(time(0)); 


	for (int i = 0; i < 36000; i++) {
		dice1 = (rand() % 6) + 1;
		dice2 = (rand() % 6) + 1;
		frequencies[dice1 + dice2]++;
	}

	printf("點數\t出現次數\n");
	printf("--------------\n");

	
	for (int j = 2; j <= 12; j++) {
		printf("%d\t%d\n", j, frequencies[j]);
	}

	return 0;
}
