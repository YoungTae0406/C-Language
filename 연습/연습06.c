#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>     // sprintf �Լ��� ����� ��� ����
#include <stdlib.h>
void main()
{
	char s1[10];       // ��ȯ�� ���ڿ��� ������ �迭
	int num1 = 283;    // 283�� ����
	sprintf(s1, "%d", num1);    // %d�� �����Ͽ� ������ ���ڿ��� ����
	printf("%s\n", s1);         // 283

	char *c1 = "256";
	int num2;
	num2 = atoi(c1); // ���ڿ��� ������ ����
	printf("%d", num2);

	char *c2 = "";
	scanf_s("%s", c2); //�����ͷ� �� ���ڿ� ������ ������ �Ұ���
	printf("%s", *c2);
}

	