#include <stdio.h>

void insertionSort(int ary[], int size); //10 6 89 23 45 34 23 12 5 67
void main() {
	int ary[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &ary[i]);
	}
	printf("정렬 전 자료 : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", ary[i]);
	}
	puts("");
	insertionSort(ary, 10);

}
void insertionSort(int ary[], int size) {
	static int count = 0;
	for (int i = 1; i < size; i++) {
		printf("횟수 %d : ", ++count);
		for (int j = 0; j < i; j++) {
			if (ary[i] <= ary[j]) {
				int temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
		for (int k = 0; k < size; k++) {
			printf("%d ", ary[k]);
		}
		puts("");
		
	}
}