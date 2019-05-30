#include <stdio.h>

void main() {
	int select;
	printf("비트 AND -> 1\n비트 OR -> 2\n비트 XOR -> 3\n종료 -> 0");
	printf("\n선택하세요. ");
	scanf_s("%d", &select);

	if (select == 1) {
		int x, y;
		printf("\n두 정수를 입력하세요 : ");
		scanf_s("%d %d", &x, &y);
		printf("\nx = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((x >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", x & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", x);

		printf("\ny = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((y >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", y& 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", y);
		int result = x & y;

		printf("\nx & y = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((result >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", result& 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", result);

	}
	else if (select == 2) {
		int x, y;
		printf("\n두 정수를 입력하세요 : ");
		scanf_s("%d %d", &x, &y);
		printf("\nx = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((x >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", x & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", x);

		printf("\ny = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((y >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", y & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", y);

		int result = x | y;

		printf("\nx | y = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((result >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", result & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", result);
	}
	else if (select == 3) {
		int x, y;
		printf("\n두 정수를 입력하세요 : ");
		scanf_s("%d %d", &x, &y);
		printf("\nx = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((x >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", x & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", x);

		printf("\ny = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((y >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", y & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", y);

		int result = x ^ y;

		printf("\nx ^ y = ");
		for (int i = 31; i > 0; i--) {
			printf("%c", ((result >> i) & 1) ? '1' : '0');//32부터 2번째 비트까지
		}
		printf("%c	", result & 1 ? '1' : '0'); //1번째 비트 출력
		printf("%d", result);
	}
	else {
		return;
	}

}