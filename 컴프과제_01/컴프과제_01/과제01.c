#include <stdio.h>

void main() {
	const float pie = 3.14; //값이 변하지 않으니 const를 이용
	float r;	float result; //r은 반지름, result은 계산결과를 담는 변수
	puts("원의 면적을 구합니다. 원하는 반지름을 적어주세요");
	scanf("%f", &r);		//반지름 입력
	result = r * r * pie;	
	printf("%f", result);

}