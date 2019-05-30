#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일
#include <stdlib.h>
void main()
{
	char s1[10];       // 변환한 문자열을 저장할 배열
	int num1 = 283;    // 283은 정수
	sprintf(s1, "%d", num1);    // %d를 지정하여 정수를 문자열로 저장
	printf("%s\n", s1);         // 283

	char *c1 = "256";
	int num2;
	num2 = atoi(c1); // 문자열을 정수로 저장
	printf("%d", num2);

	char *c2 = "";
	scanf_s("%s", c2); //포인터로 한 문자열 선언은 수정이 불가능
	printf("%s", *c2);
}

	