#include <stdio.h>

// ���j����r�ꪺ�禡
void stringReverse(char str[]) {
	if (*str) {
		stringReverse(str + 1);
		printf("%c", *str);
	}
}

int main() {
	char myString[] = "Hello"; // �i�H���o�Ӧr��Ӵ���

	printf("��l�r��: %s\n", myString);
	printf("�����r��: ");
	stringReverse(myString);
	printf("\n");

	return 0;
}
