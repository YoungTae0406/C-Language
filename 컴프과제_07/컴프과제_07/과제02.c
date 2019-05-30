#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void toUpperCase(char* src, char* dst); //함수 선언
void subString(char* src, char* dst, int start, int end);

void main() {
	char s1[] = "sttRinG"; 
	char s2[] = "         ";

	printf("toUpperCase\t: %s -> ", s1); //s1을 대문자로 다 바꿈
	toUpperCase(s1, s2);
	printf("\n");

	char c1[10] = "subString";
	char c2[10] = "asdfea";
	printf("subString\t: %s, 3, 7 -> ", c1); //c1의 인덱스 3부터 7까지 짤라서 출력시킴
	subString(c1, c2, 3, 7);

}
void toUpperCase(char* src, char* dst) {
	for (int i = 0; i < strlen(src); i++) {
		if (97 <= src[i] && src[i] <= 122) { //소문자라면 
			src[i] = src[i] - 32; //32를 빼 대문자로 바꾼다.
		}
	}
	int len = strlen(dst); //dst의 문자열 크기
	strcpy_s(dst, len ,src); //두 번째 인자에 sizeof(dst)하면 오류
	//왜냐면 dst는 char 포인터라 포인터의 크기가 들어가서
	printf("%s", dst);
}
void subString(char* src, char* dst, int start, int end) {
	char temp[20]=""; 
	int length = end - start;
	for (int i = 0; i < length; i++) {
		temp[i] = src[start++]; //src[start++]를 해서 짜를 부분부터 temp에 넣는다
		//길이 length만큼을 반복해서
	}
	int len = strlen(dst);
	strcpy_s(dst, len, temp);
	printf("%s", dst);
}