#include <stdio.h>

void optimized_bubble_sort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		int swapped = 0;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 1;
			}
		}

		if (!swapped) {
			break;
		}
	}
}

int main() {
	int arr[] = { 64, 74, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);

	optimized_bubble_sort(arr, n);

	printf("±Æ§Ç«áªº°}¦C: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}