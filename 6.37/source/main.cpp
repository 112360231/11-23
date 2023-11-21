#include <stdio.h>

// 遞迴尋找陣列中最大值的函式
int recursiveMaximum(int array[], int size) {
	// 基本情況：當陣列只有一個元素時，直接返回該元素
	if (size == 1) {
		return array[0];
	}
	else {
		// 找出除了第一個元素外剩餘陣列的最大值
		int maxRest = recursiveMaximum(array + 1, size - 1);
		// 將目前的元素與剩餘陣列的最大值比較，返回最大值
		return (array[0] > maxRest) ? array[0] : maxRest;
	}
}

int main() {
	int arr[] = { 15, 7, 25, 45, 3, 35 }; // 可以更改這個陣列來測試

	int size = sizeof(arr) / sizeof(arr[0]);
	int max = recursiveMaximum(arr, size);

	printf("陣列中的最大元素是: %d\n", max);

	return 0;
}
