#include <stdio.h>

void print_array(int arr[], int size) {
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void selection_sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("\nRound %d\n\n", i);

		int min_pos = i;

		for (int j = i + 1; j < size; j++) {
			printf("Check if %d is > than %d\n", arr[i], arr[j]);

			if (arr[min_pos] > arr[j]) {
				min_pos = j;
			}
		}

		printf("The smaller item of this round is %d\n\n", arr[min_pos]);

		int temp = arr[i];
		arr[i] = arr[min_pos];
		arr[min_pos] = temp;
	}

	print_array(arr, size);
}

int main() {
	int numbers[] = { 64, 34, 25, 12, 22, 11, 90};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	selection_sort(numbers, size);

	return 0;
}