#include <stdio.h>

#define MAX 9
void main() {
	int i;
	int input;

	printf("������ ���α׷��� �����մϴ�.\n\n");

	while (2) {
		printf("���ڸ� �Է��ϼ��� quit = -1 ");
		scanf_s(" %d", &input);

		if (input == -1) break;

		printf("\n%d�� �������� ", input);

		for (int i = 1; i<=MAX ; i++) {
			printf("%4d", input*i);

		}
		printf("\n\n");
	}
}