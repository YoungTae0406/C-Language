#include <stdio.h>

void main() {
	int money;
	int coins[5] = { 500, 100, 50, 10, 1 };
	int numberOfCoin[5];

	printf("���� �׼��� �Է��ϼ��� : \n");
	scanf_s("%d", &money);

	for (int i = 0; i < 5; i++) {
		numberOfCoin[i] = money / coins[i];
		money = money % coins[i];
	}
	printf("���� ������ ����� ...\n");
	for (int j = 0; j < 5; j++) {
		printf("%d�� %d���� ����\n", coins[j], numberOfCoin[j]);
	}
}