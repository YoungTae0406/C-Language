#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int checkInt(int a) { 
	srand(time(NULL)); //�������� �ްԲ� ��.
	int array[20];	const int arraysize = 20; // �迭 array ����
	int index = 0; int true = -1; // �˻������ ������ 1�� �ٲ�� ��.
	for (int i = 0; i < arraysize; i++) {
		int random = rand() % 41 + 10; // 10~50������ ���� �޵��� ��.
		array[i] = random;
		printf("%d  ", array[i]);
	}//�迭 �ʱ�ȭ
	for (int j = 0; j < arraysize; j++) {
		if (array[j] == a) {
			printf("\n�ε��� : %d  ", index);
			true = 1; // �迭�� ������ true�� 1�� ��.
		}
		else {
			index++;
		}
	}
	if (true == -1) {
		printf("\n�˻���� ����");
	}

}

void main() {
	int input; puts("Ȯ���� �������� �Է��ϼ���");
	scanf_s("%d", &input);
	checkInt(input);
}