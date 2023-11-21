#include <stdio.h>

// 遞迴反轉字串的函式
void stringReverse(char str[]) {
	if (*str) {
		stringReverse(str + 1);
		printf("%c", *str);
	}
}

int main() {
	char myString[] = "Hello"; // 可以更改這個字串來測試

	printf("原始字串: %s\n", myString);
	printf("反轉後字串: ");
	stringReverse(myString);
	printf("\n");

	return 0;
}
