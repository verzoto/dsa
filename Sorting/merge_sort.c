#include <stdio.h>

void print_array(int arr[], int start, int end) {
	printf("\n");
	for (int i = start; i <= end; i++) {
		printf("%d ", arr[i]);
	}
}

void merge(int arr[], int start, int half, int end) {
	int left_size = (half - start) + 1;
	int right_size = end - half;

	int left_array[left_size];
	int right_array[right_size];

	for (int l = 0; l < left_size; l++) {
		left_array[l] = arr[start + l];
	}

	for (int r = 0; r < right_size; r++) {
		right_array[r] = arr[(half + 1) + r];
	}

	int left_index = 0;
	int right_index = 0;
	int merged_index = start;

	while (left_index < left_size && right_index < right_size) {
		if (left_array[left_index] < right_array[right_index]) {
			arr[merged_index] = left_array[left_index];
			left_index++;
		} else {
			arr[merged_index] = right_array[right_index];
			right_index++;
		}

		merged_index++;
	}

	while (left_index < left_size) {
		arr[merged_index] = left_array[left_index];
		left_index++;
		merged_index++;
	}

	while (right_index < right_size) {
		arr[merged_index] = right_array[right_index];
		right_index++;
		merged_index++;
	}
}

void merge_sort(int arr[], int start, int end) {

	if (start >= end) {
		return;
	}

	int half = (start + end) / 2;
	merge_sort(arr, start, half);
	merge_sort(arr, half + 1, end);
	merge(arr, start, half, end);
	print_array(arr, start, end);
}



int main() {
	int numbers[] = { 64, 34, 25, 12, 22, 11, 90};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	merge_sort(numbers, 0, size-1);
	return 0;
}