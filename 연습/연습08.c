#include <stdio.h>

void arraysum(int (*ary)[2], int rowsize, int colsize);

void main() {
	int array[2][2] = {0,};
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		for (int j = 0; j < sizeof(array[0]) / sizeof(array[0][0]); j++) {
			scanf_s("%d", &array[i][j]);
		}
	}
	arraysum(array, 2, 2);

	int array2[3] = { 0, };
	int *ptr2 = array2;
	printf("\n%d	%d", ptr2[0], ptr2[1]);
	scanf_s("%d", ptr2+1);
	printf("%d", *(ptr2+1));

	int array3[2][2] = { 0, 1, 0, 1 };
	int(*ptr3)[2] = array3;
	printf("\n%d %d", ptr3[0][0], ptr3[1][0]);
	scanf_s("%d", ptr3[1]);
	printf("%d", *ptr3[1]);
	printf("\n%d %d", *(*(ptr3 + 0) + 1), *(*(ptr3 + 1) + 1));
	
}
void arraysum(int (*ary)[2], int rowsize, int colsize) {
	int sum = 0;
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			sum += ary[i][j];
		}
	}
	int mean = sum / (rowsize * colsize);
	printf("\n%d	%d", sum, mean);
}