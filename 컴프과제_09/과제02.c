#include <stdio.h>
#include<math.h>

struct polynomial {
	int coeff; //���
	int exp; //����

};
void main() {
	struct polynomial pn[5]; //����ü �迭 ����
	int numberDegree = 0; // �� ���� ������ ���Ǿ��� �� Ȯ���� �� �ִ� ����
	int x; //���׽� ������ ����
	printf("�� �̻� �Է��ϰ� ���� ������ ����� ������ 0�� �Է�\n"); 
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &pn[i].coeff);
		scanf_s("%d", &pn[i].exp);
		if (pn[i].coeff != 0) { //����� 0�ΰŸ� ������ ����� �ȵȰŴ� ������ ���Ǿ��� �� Ȯ���� �ʿ䰡 ����
			numberDegree++;
		}
	}
	printf("x�� �Է��ϼ��� : ");
	scanf_s("%d", &x); //x�� �Է��Ѵ�.
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += pn[i].coeff * (int)(pow(x, pn[i].exp)); //����ü �迭���� ����� ������ ����� sum�� ��� ���ذ��� �������ش�.
	}
	printf("���׽��� �� : %d\n", sum);
	printf("������ ���� ���� : %d", numberDegree); //���
}