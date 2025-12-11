#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LengthOfArray 20
#define SizeOfArray 5

int main() {
	int Low = -20, High = 20, NumOfIterations = 20;
	int MaxVal = 0, MaxI, MaxJ;
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

	for (int i = 0; i < SizeOfArray; i++) {
		for (int j = 0; j < SizeOfArray; j++) {
			if (arr[i][j] > MaxVal) {
				MaxVal = arr[i][j];
				MaxI = i;
				MaxJ = j;
			}
		}
	}

	int TempVal = arr[MaxI][MaxJ];
	arr[MaxI][MaxJ] = arr[MaxJ][MaxI];
	arr[MaxJ][MaxI] = TempVal;

	printf("Max Value = %d; i = %d, j = %d" , MaxVal, MaxI + 1, MaxJ + 1);

	printf("\nTransformed array:\n");
	for (int i = 0; i < SizeOfArray; i++) {
		for (int j = 0; j < SizeOfArray; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}