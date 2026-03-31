#include <stdio.h>

int main() {
	int numbers[10];
	int ratings[5] = { 8, 10, 8, 7, 9 };
	int ages[] = { 12, 20, 32, 45, 82, 17 };


	printf("First rating: %d\n", ratings[0]);
	printf("Last rating: %d\n", ratings[4]);
	
	ratings[1] = 4;
	printf("Rating changed to: %d\n", ratings[1]);
}