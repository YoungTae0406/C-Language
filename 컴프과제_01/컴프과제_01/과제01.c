#include <stdio.h>

void main() {
	const float pie = 3.14; //���� ������ ������ const�� �̿�
	float r;	float result; //r�� ������, result�� ������� ��� ����
	puts("���� ������ ���մϴ�. ���ϴ� �������� �����ּ���");
	scanf("%f", &r);		//������ �Է�
	result = r * r * pie;	
	printf("%f", result);

}