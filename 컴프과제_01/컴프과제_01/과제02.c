#include <stdio.h>

void main() {
	float input; //�Է¹޴� ��
	float output1, output2; //������ �������� ����ϴ� ����

	puts("�Ǽ� ���� �Է��ϸ� ������ �������� ������ ǥ���մϴ�.");
	scanf("%f", &input);
	output1 = input *input;
	output2 = input * input * input;
	printf("%+e\n", output1); //����ǥ��� %e
	printf("%+e", output2);		//��ȣ�� ǥ��
}