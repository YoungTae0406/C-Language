#include <stdio.h>

struct student {
	char name[10]; //student�� �̸�
	int schoolnumber; //student�� �й�
	double mean; //student�� ���

};
void main() {
	int seq; //���� �ְ����� student �ε���
	double totalmean=0; //��ü �л��� ���
	struct student student[5]; // ����ü �迭
	double mmean = 0; //�ְ����� ����ϱ� ���� ��� �ʿ��� ����
	for (int i = 0; i < 5; i++) {
		printf("�̸�, ����, ������ �Է��ϼ���. \n");
		scanf_s("%s", student[i].name,10);
		scanf_s("%d", &student[i].schoolnumber);
		scanf_s("%lf", &student[i].mean);
		totalmean += student[i].mean;

	}
	for (int i = 0; i < 5; i++) {
		if (mmean < student[i].mean) {
			mmean = student[i].mean;
			seq = i; //�ְ����� �ε����� ����
		}
	}
	printf("���� ������ ���� �л��� �̸�, �й�, ���� : %s %d %lf\n", student[seq].name,
		student[seq].schoolnumber, student[seq].mean); //����� ���� �л��� �̸� �й� ������ ���
	totalmean = totalmean / 5; //��ü �л��� ����� ����
	printf("��ü �л��� ��հ� �ְ��� : %lf %lf", totalmean, student[seq].mean); //���
}