#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int checkInt(int a) { 
	srand(time(NULL)); //랜덤으로 받게끔 함.
	int array[20];	const int arraysize = 20; // 배열 array 생성
	int index = 0; int true = -1; // 검색결과가 나오면 1로 바뀌게 함.
	for (int i = 0; i < arraysize; i++) {
		int random = rand() % 41 + 10; // 10~50까지의 수를 받도록 함.
		array[i] = random;
		printf("%d  ", array[i]);
	}//배열 초기화
	for (int j = 0; j < arraysize; j++) {
		if (array[j] == a) {
			printf("\n인덱스 : %d  ", index);
			true = 1; // 배열에 있으면 true를 1로 함.
		}
		else {
			index++;
		}
	}
	if (true == -1) {
		printf("\n검색결과 없음");
	}

}

void main() {
	int input; puts("확인할 정수값을 입력하세요");
	scanf_s("%d", &input);
	checkInt(input);
}