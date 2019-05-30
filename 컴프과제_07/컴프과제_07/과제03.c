#include<stdio.h>
#include<string.h>
#define DECODE 0
#define ENCODE 1

void caesar(char* input, char* output, const int key, const int type); //함수 선언
void main() {
	char s1[32] = "";
	char s2[32] = "";
	int keynumber;

	printf("please input your string : ");
	scanf_s("%s", s1, sizeof(s1));	//문자열 입력받음
	printf("please input caesar key number : ");
	scanf_s("%d", &keynumber);	//키 값도 입력받음
	printf("Encoded string is : ");
	caesar(s1, s2, keynumber, 1);	//암호화 된 상태를 출력
	printf("%s\n", s2);
	printf("Decoded string is : ");
	caesar(s2, s1, keynumber, 0);	//복호화 된 상태를 출력
	printf("%s", s1);
}
void caesar(char* input, char* output, const int key, const int type) {
	int length = 32;

	if (type == DECODE) { //복호
		for (int i = 0; i < strlen(input); i++) {
			if (97 <= input[i] && input[i] <= 122) { //소문자이면
				if (input[i] - key < 97) { //key로 인해 97보다 작아질 경우
					input[i] = input[i] + 26 - key; 
				}
				else {
					input[i] = input[i] - key;
				}
			}
			if (65 <= input[i] && input[i] <= 90) {//대문자이면
				if (input[i] - key < 65) { //key로 인해 65보다 작아질 경우
					input[i] = input[i] + 26 - key;
				}
				else {
					input[i] = input[i] - key;
				}
			}
		}
		strcpy_s(output, length, input); // output에 input을 복사시킨다.
	}
	if (type == ENCODE) { //암호
		for (int i = 0; i < strlen(input); i++) {
			if (97 <= input[i] && input[i] <= 122) { //소문자라면
				if (input[i] + key > 122) { //key를 더해 122를 초과한다면
					input[i] = input[i] - 26 + key;
				}
				else {
					input[i] = input[i] + key;
				}
			}
			if (65 <= input[i] && input[i] <= 90) { //대문자라면
				if (input[i] + key > 90) { //key를 더해 90을 초과한다면
					input[i] = input[i] - 26 + key;
				}
				else {
					input[i] = input[i] + key;
				}
			}
		}
		strcpy_s(output, length, input); //output에 input을 복사한다.

	}

}