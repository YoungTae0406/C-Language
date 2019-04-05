#include <stdio.h>

void main() {
	int money;
	int coins[5] = { 500, 100, 50, 10, 1 };
	int numberOfCoin[5];

	printf("돈의 액수를 입력하세요 : \n");
	scanf_s("%d", &money);

	for (int i = 0; i < 5; i++) {
		numberOfCoin[i] = money / coins[i];
		money = money % coins[i];
	}
	printf("돈을 지급한 방법은 ...\n");
	for (int j = 0; j < 5; j++) {
		printf("%d은 %d개를 지급\n", coins[j], numberOfCoin[j]);
	}
}