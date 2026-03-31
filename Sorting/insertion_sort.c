#include <stdio.h>

void print_array(int arr[], int size) {
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void insertion_sort(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		printf("\nRound %d\n\n", i);

		int current = arr[i];

		for (int j = i-1; j >= 0; j--) {
			printf("Check if %d is > than %d\n", arr[j], arr[i]);

			if (arr[j] > current) {
				arr[j + 1] = arr[j];
				arr[j] = current;
			} else {
				break;
			}
		}
	}

	print_array(arr, size);
}

int main() {
	int numbers[] = {64, 34, 25, 12, 22, 11, 90};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	insertion_sort(numbers, size);

	return 0;
}