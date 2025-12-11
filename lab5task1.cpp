#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LengthOfArray 20

int main() {
	int Low = -20, High = 20, counter = 0, NumOfIterations = 20, LowArr = 0, HighArr = LengthOfArray - 1;
	int arr[LengthOfArray] = { 0 };
	srand(time(NULL));
	printf("Array:\n");
	for (int i = 0; i < NumOfIterations; i++) {
		arr[i] = rand() % (High - Low + 1) + Low;
		printf("%5d", arr[i]);
	}

	while (counter < NumOfIterations / 2) {
		int TempHigh = arr[HighArr];
		int TempLow = arr[LowArr];
		arr[LowArr] = TempHigh;
		arr[HighArr] = TempLow;
		LowArr++;
		HighArr--;
		counter++;
	}
	printf("\nInverted array:\n");
	for (int i = 0; i < NumOfIterations; i++) {
		printf("%5d", arr[i]);
	}
}