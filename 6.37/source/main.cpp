#include <stdio.h>

// ���j�M��}�C���̤j�Ȫ��禡
int recursiveMaximum(int array[], int size) {
	// �򥻱��p�G��}�C�u���@�Ӥ����ɡA������^�Ӥ���
	if (size == 1) {
		return array[0];
	}
	else {
		// ��X���F�Ĥ@�Ӥ����~�Ѿl�}�C���̤j��
		int maxRest = recursiveMaximum(array + 1, size - 1);
		// �N�ثe�������P�Ѿl�}�C���̤j�Ȥ���A��^�̤j��
		return (array[0] > maxRest) ? array[0] : maxRest;
	}
}

int main() {
	int arr[] = { 15, 7, 25, 45, 3, 35 }; // �i�H���o�Ӱ}�C�Ӵ���

	int size = sizeof(arr) / sizeof(arr[0]);
	int max = recursiveMaximum(arr, size);

	printf("�}�C�����̤j�����O: %d\n", max);

	return 0;
}
