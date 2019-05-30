#include <stdio.h>
#include <string.h>
void main() {
	char name[5][10]; //학생을 입력받을 문자열
	char temp[10]; //찾을려는 학생 문자열
	int bool; //참 거짓 판별
	int count = sizeof(name) / sizeof(name[0]); //배열의 한 행의 크기

	for (int i = 0; i < count; i++) {
		printf("input students name [%d] :",i);
		scanf_s("%s",name[i], sizeof(name[i])); //문자열 입력시 3번째 인자에
		//char 배열의 크기를 넣어줘야 함.
	}
	printf("input complemete\n");
	printf("search for name : \n");
	scanf_s("%s", &temp, sizeof(temp)); //찾을려는 학생 이름 입력
	for (int i = 0; i < count; i++) {
		bool = strcmp(temp, name[i]); //학생이름 문자열에서 비교 같으면 0을 반환
		if (bool == 0) {
			break;
		}
	}
	if (!bool) { //0이 나왔다면 찾은 것
		printf("found it!");
	}
	else {
		printf("nope");
	}
}