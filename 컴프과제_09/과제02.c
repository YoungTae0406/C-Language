#include <stdio.h>
#include<math.h>

struct polynomial {
	int coeff; //계수
	int exp; //지수

};
void main() {
	struct polynomial pn[5]; //구조체 배열 선언
	int numberDegree = 0; // 몇 개의 차수가 사용되었는 지 확인할 수 있는 변수
	int x; //다항식 미지수 변수
	printf("더 이상 입력하고 싶지 않으면 계수와 지수에 0을 입력\n"); 
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &pn[i].coeff);
		scanf_s("%d", &pn[i].exp);
		if (pn[i].coeff != 0) { //계수가 0인거면 실제로 계산이 안된거니 차수가 사용되었는 지 확인할 필요가 없음
			numberDegree++;
		}
	}
	printf("x를 입력하세요 : ");
	scanf_s("%d", &x); //x를 입력한다.
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += pn[i].coeff * (int)(pow(x, pn[i].exp)); //구조체 배열마다 계수와 지수를 계산해 sum에 계속 더해가며 저장해준다.
	}
	printf("다항식의 값 : %d\n", sum);
	printf("차수가 사용된 개수 : %d", numberDegree); //출력
}