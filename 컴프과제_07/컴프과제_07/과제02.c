#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void toUpperCase(char* src, char* dst); //�Լ� ����
void subString(char* src, char* dst, int start, int end);

void main() {
	char s1[] = "sttRinG"; 
	char s2[] = "         ";

	printf("toUpperCase\t: %s -> ", s1); //s1�� �빮�ڷ� �� �ٲ�
	toUpperCase(s1, s2);
	printf("\n");

	char c1[10] = "subString";
	char c2[10] = "asdfea";
	printf("subString\t: %s, 3, 7 -> ", c1); //c1�� �ε��� 3���� 7���� ©�� ��½�Ŵ
	subString(c1, c2, 3, 7);

}
void toUpperCase(char* src, char* dst) {
	for (int i = 0; i < strlen(src); i++) {
		if (97 <= src[i] && src[i] <= 122) { //�ҹ��ڶ�� 
			src[i] = src[i] - 32; //32�� �� �빮�ڷ� �ٲ۴�.
		}
	}
	int len = strlen(dst); //dst�� ���ڿ� ũ��
	strcpy_s(dst, len ,src); //�� ��° ���ڿ� sizeof(dst)�ϸ� ����
	//�ֳĸ� dst�� char �����Ͷ� �������� ũ�Ⱑ ����
	printf("%s", dst);
}
void subString(char* src, char* dst, int start, int end) {
	char temp[20]=""; 
	int length = end - start;
	for (int i = 0; i < length; i++) {
		temp[i] = src[start++]; //src[start++]�� �ؼ� ¥�� �κк��� temp�� �ִ´�
		//���� length��ŭ�� �ݺ��ؼ�
	}
	int len = strlen(dst);
	strcpy_s(dst, len, temp);
	printf("%s", dst);
}