#include <stdio.h>

void main() {
	int select;
	printf("��Ʈ AND -> 1\n��Ʈ OR -> 2\n��Ʈ XOR -> 3\n���� -> 0");
	printf("\n�����ϼ���. ");
	scanf_s("%d", &select);

	if (select == 1) {
		int x, y;
		printf("\n�� ������ �Է��ϼ��� : ");
		scanf_s("%d %d", &x, &y);
		printf("\nx = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((x >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", x & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", x);

		printf("\ny = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((y >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", y& 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", y);
		int result = x & y;

		printf("\nx & y = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((result >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", result& 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", result);

	}
	else if (select == 2) {
		int x, y;
		printf("\n�� ������ �Է��ϼ��� : ");
		scanf_s("%d %d", &x, &y);
		printf("\nx = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((x >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", x & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", x);

		printf("\ny = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((y >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", y & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", y);

		int result = x | y;

		printf("\nx | y = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((result >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", result & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", result);
	}
	else if (select == 3) {
		int x, y;
		printf("\n�� ������ �Է��ϼ��� : ");
		scanf_s("%d %d", &x, &y);
		printf("\nx = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((x >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", x & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", x);

		printf("\ny = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((y >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", y & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", y);

		int result = x ^ y;

		printf("\nx ^ y = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((result >> i) & 1) ? '1' : '0');//32���� 2��° ��Ʈ����
		}
		printf("%c	", result & 1 ? '1' : '0'); //1��° ��Ʈ ���
		printf("%d", result);
	}
	else {
		return;
	}

}