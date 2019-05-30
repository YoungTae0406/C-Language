#include <stdio.h>

int max(int *array, int size);
void main() {
	int N;
	scanf_s("%d", &N);
	int array[20];
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &array[i]);
	}
	printf("%d", max(array, N));

}
int max(int *array, int size) {
	if (size==0) {
		return array[0];
	}
	int max2 = max(array , size - 1);
	if (max2 > array[size]) {
		return max2;
	}
	else {
		return array[size];
	}

}