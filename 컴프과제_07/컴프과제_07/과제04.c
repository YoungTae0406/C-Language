#include <stdio.h>
#include <string.h>
void main() {
	int bool[] = {0,0,0,0}; //��, ������ �Ǻ��� ����
	char password[30] = "";

	printf("�н����带 �Է��ϼ��� -> ");
	scanf_s("%s", password, sizeof(password)); //�н����带 �Է¹���
	if (strlen(password) < 10) { //ũ�Ⱑ 10�� ���� ������
		printf("�н����� ũ��� 10 �̻��̿��� �մϴ�.\n"); //������ ������ ���
	}
	for (int i = 0; i < strlen(password); i++) {//@, #, %�� �ѹ��̶� ������ ���� Ȯ��
		if (password[i] == '@') {
			bool[0] = 1;}
		else if (password[i] == '#') {
			bool[0] = 1;}
		else if (password[i] == '%') {
			bool[0] = 1;}
	}
	if (!bool[0]) {//���͵��� �ϳ��� �ȳ��Դٸ� bool[0]�� 0�� ��
		printf("Ư������ @, #, %% �� �ϳ��� �ݵ�� �����ؾ� ��\n");
	}
	for (int i = 0; i < strlen(password); i++) {//�ϳ� �̻��� ����, �ҹ���, �빮�ڰ� �ִ� �� üũ
		if (48 <= password[i] && password[i] <= 57) {//����
			bool[1] = 1;}
		else if (65 <= password[i] && password[i] <= 90) {//�빮��
			bool[2] = 1;}
		else if (97 <= password[i] && password[i] <= 122) {//�ҹ���
			bool[3] = 1;}
	}
	if (!(bool[1]) || !(bool[2]) || !(bool[3])) {
		printf("�ϳ� �̻��� ����, �ҹ���, �빮�ڸ� �����ؾ� ��\n");
	}
	bool[1] = 1; bool[2] = 1; bool[3] = 1; //�ʱ�ȭ

	for (int i = 0; i < strlen(password)-1; i++) {//���������� ������ �� Ȯ��
		if (48 <= password[i] && password[i] <= 57) {
			if (48 <= password[i+1] && password[i+1] <= 57) {//�� ���� �͵� �ش�Ǵ� �� Ȯ��
				bool[1] = 0;
			}
		}
		if (65 <= password[i] && password[i] <= 90) {
			if (65 <= password[i + 1] && password[i + 1] <= 90) {
				bool[2] = 0;
			}
		}
		if (97 <= password[i] && password[i] <= 122) {
			if (97 <= password[i+1] && password[i+1] <= 122) {
				bool[3] = 0;
			}
		}
	}
	if (!(bool[1]) || !(bool[2]) || !(bool[3])) { //bool[1]�� 0�� ��ٸ� ������ �ش�� ���̴� ���ǹ��� ���̵�
		printf("���ӵ� 2���� �̻��� ������ �� ����.");
	}
	
}