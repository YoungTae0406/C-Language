#include <stdio.h>

#define MAX 9
void main() {
	int i;
	int input;

	printf("구구단 프로그램을 시작합니다.\n\n");

	while (2) {
		printf("숫자를 입력하세요 quit = -1 ");
		scanf_s(" %d", &input);

		if (input == -1) break;

		printf("\n%d의 구구단은 ", input);

		for (int i = 1; i<=MAX ; i++) {
			printf("%4d", input*i);

		}
		printf("\n\n");
	}
}