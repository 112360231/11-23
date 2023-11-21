#include <stdio.h>

// 使用遞迴進行二元搜尋的函式
int binarySearch(int array[], int start, int end, int key) {
	if (end >= start) {
		int mid = start + (end - start) / 2;

		// 如果元素正好在中間
		if (array[mid] == key)
			return mid;

		// 如果元素小於中間的元素，只能在左子陣列中
		if (array[mid] > key)
			return binarySearch(array, start, mid - 1, key);

		// 否則元素只能在右子陣列中
		return binarySearch(array, mid + 1, end, key);
	}

	// 如果元素不在陣列中
	return -1;
}

int main() {
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 10;

	int result = binarySearch(arr, 0, n - 1, key);
	if (result == -1)
		printf("元素不在陣列中\n");
	else
		printf("元素在索引 %d 中\n", result);

	return 0;
}
