#include<stdio.h>
#include<string.h>
#define DECODE 0
#define ENCODE 1

void caesar(char* input, char* output, const int key, const int type); //�Լ� ����
void main() {
	char s1[32] = "";
	char s2[32] = "";
	int keynumber;

	printf("please input your string : ");
	scanf_s("%s", s1, sizeof(s1));	//���ڿ� �Է¹���
	printf("please input caesar key number : ");
	scanf_s("%d", &keynumber);	//Ű ���� �Է¹���
	printf("Encoded string is : ");
	caesar(s1, s2, keynumber, 1);	//��ȣȭ �� ���¸� ���
	printf("%s\n", s2);
	printf("Decoded string is : ");
	caesar(s2, s1, keynumber, 0);	//��ȣȭ �� ���¸� ���
	printf("%s", s1);
}
void caesar(char* input, char* output, const int key, const int type) {
	int length = 32;

	if (type == DECODE) { //��ȣ
		for (int i = 0; i < strlen(input); i++) {
			if (97 <= input[i] && input[i] <= 122) { //�ҹ����̸�
				if (input[i] - key < 97) { //key�� ���� 97���� �۾��� ���
					input[i] = input[i] + 26 - key; 
				}
				else {
					input[i] = input[i] - key;
				}
			}
			if (65 <= input[i] && input[i] <= 90) {//�빮���̸�
				if (input[i] - key < 65) { //key�� ���� 65���� �۾��� ���
					input[i] = input[i] + 26 - key;
				}
				else {
					input[i] = input[i] - key;
				}
			}
		}
		strcpy_s(output, length, input); // output�� input�� �����Ų��.
	}
	if (type == ENCODE) { //��ȣ
		for (int i = 0; i < strlen(input); i++) {
			if (97 <= input[i] && input[i] <= 122) { //�ҹ��ڶ��
				if (input[i] + key > 122) { //key�� ���� 122�� �ʰ��Ѵٸ�
					input[i] = input[i] - 26 + key;
				}
				else {
					input[i] = input[i] + key;
				}
			}
			if (65 <= input[i] && input[i] <= 90) { //�빮�ڶ��
				if (input[i] + key > 90) { //key�� ���� 90�� �ʰ��Ѵٸ�
					input[i] = input[i] - 26 + key;
				}
				else {
					input[i] = input[i] + key;
				}
			}
		}
		strcpy_s(output, length, input); //output�� input�� �����Ѵ�.

	}

}