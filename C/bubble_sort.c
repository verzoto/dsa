#include <stdio.h>

void print_array(int arr[], int size) {
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void bubble_sort(int arr[], int size) {
	for (int i = 0; i < size -1; i++) {
		printf("\nRound: %d\n", i);

		int changed = 0;

		for (int j = 0; j <= (size -1) - i; j++) {
			printf("Checking if %d > than %d\n", arr[j], arr[j + 1]);

			if (arr[j] > arr[j + 1]) {

				int temp = arr[j];

				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				changed = 1;
			}
		}


		if (!changed) {
			printf("\nBubble Sort Finished \n");
			print_array(arr, size);
			break;
		}
	}
}

int main() {
	int numbers[] = { 23, 12, 93, 45, 181, 15, 9, 7, 13 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	bubble_sort(numbers, size);

	return 0;
}