#include <stdio.h>

// �ϥλ��j�i��G���j�M���禡
int binarySearch(int array[], int start, int end, int key) {
	if (end >= start) {
		int mid = start + (end - start) / 2;

		// �p�G�������n�b����
		if (array[mid] == key)
			return mid;

		// �p�G�����p�󤤶��������A�u��b���l�}�C��
		if (array[mid] > key)
			return binarySearch(array, start, mid - 1, key);

		// �_�h�����u��b�k�l�}�C��
		return binarySearch(array, mid + 1, end, key);
	}

	// �p�G�������b�}�C��
	return -1;
}

int main() {
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 10;

	int result = binarySearch(arr, 0, n - 1, key);
	if (result == -1)
		printf("�������b�}�C��\n");
	else
		printf("�����b���� %d ��\n", result);

	return 0;
}
