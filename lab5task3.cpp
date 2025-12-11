#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LengthOfArray 20
#define SizeOfArray 10

int main() {
	int Low = 0, High = 0, counter = 0, NumOfIterations = 20;
	double SumOfNumbers = 0;
	int arr[LengthOfArray][LengthOfArray];
	printf("Enter min and max range value: ");
	scanf_s("%d %d", &Low, &High);
	srand(time(NULL));
	printf("Array:\n");
	for (int i = 0; i < SizeOfArray; i++) {
		for (int j = 0; j < SizeOfArray; j++) {
			arr[i][j] = rand() % (High - Low + 1) + Low;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	printf("Transformed Array:\n");
	for (int i = 0; i < SizeOfArray; i++) {
		for (int j = 0; j < SizeOfArray; j++) {
			if (i < (SizeOfArray / 2)) {
				if (i >= j) {
					printf("%4d", arr[i][j]);
					SumOfNumbers += arr[i][j];
					counter++;
				}
				else if (i > SizeOfArray - j - 2) {
					printf("%4d", arr[i][j]);
					SumOfNumbers += arr[i][j];
					counter++;
				}
				else {
					printf("    ");
			}	}
			else {
				printf("    ");
			}
		}
		printf("\n");
	}

	printf("Number of elements in picture: %d\n", counter);
	printf("Average of numbers in picture: %lf", SumOfNumbers / counter);
}