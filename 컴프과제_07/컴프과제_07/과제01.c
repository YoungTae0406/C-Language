#include <stdio.h>
#include <string.h>
void main() {
	char name[5][10]; //�л��� �Է¹��� ���ڿ�
	char temp[10]; //ã������ �л� ���ڿ�
	int bool; //�� ���� �Ǻ�
	int count = sizeof(name) / sizeof(name[0]); //�迭�� �� ���� ũ��

	for (int i = 0; i < count; i++) {
		printf("input students name [%d] :",i);
		scanf_s("%s",name[i], sizeof(name[i])); //���ڿ� �Է½� 3��° ���ڿ�
		//char �迭�� ũ�⸦ �־���� ��.
	}
	printf("input complemete\n");
	printf("search for name : \n");
	scanf_s("%s", &temp, sizeof(temp)); //ã������ �л� �̸� �Է�
	for (int i = 0; i < count; i++) {
		bool = strcmp(temp, name[i]); //�л��̸� ���ڿ����� �� ������ 0�� ��ȯ
		if (bool == 0) {
			break;
		}
	}
	if (!bool) { //0�� ���Դٸ� ã�� ��
		printf("found it!");
	}
	else {
		printf("nope");
	}
}