#include <stdio.h>

void main() {
	int count = 0; //������ ����
	int money;	// �Է¹޴� ����
	int coin[] = { 500, 100, 50, 10 ,1 }; //������
	puts("�ݾ��� �Է��ϼ���");
	scanf_s("%d", &money); //�ݾ��� �Է�
	count = money / coin[0]; //500������ ���� ���� �� ������ ����
	money = money % coin[0]; //�� ������ ��

	count += money / coin[1]; //100������ ���� ��
	money = money % coin[1]; //������ ��

	count += money / coin[2]; //50��
	money = money % coin[2];

	count += money / coin[3]; //10��
	money = money % coin[3];

	count += money / coin[4]; //1��
	
	printf("���� ���� ���� ������ ���� : %d", count);



}