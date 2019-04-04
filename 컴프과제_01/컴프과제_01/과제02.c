#include <stdio.h>

void main() {
	float input; //입력받는 값
	float output1, output2; //제곱과 세제곱을 출력하는 변수

	puts("실수 값을 입력하면 제곱과 세제곱을 지수로 표기합니다.");
	scanf("%f", &input);
	output1 = input *input;
	output2 = input * input * input;
	printf("%+e\n", output1); //지수표기는 %e
	printf("%+e", output2);		//부호도 표기
}