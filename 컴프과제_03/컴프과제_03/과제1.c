#include <stdio.h>

void main() {
	int count = 0; //동전의 개수
	int money;	// 입력받는 숫자
	int coin[] = { 500, 100, 50, 10 ,1 }; //동전들
	puts("금액을 입력하세요");
	scanf_s("%d", &money); //금액을 입력
	count = money / coin[0]; //500원으로 먼저 했을 때 동전의 개수
	money = money % coin[0]; //그 나머지 돈

	count += money / coin[1]; //100원으로 했을 때
	money = money % coin[1]; //나머지 돈

	count += money / coin[2]; //50원
	money = money % coin[2];

	count += money / coin[3]; //10원
	money = money % coin[3];

	count += money / coin[4]; //1원
	
	printf("가장 적은 수의 동전을 지급 : %d", count);



}