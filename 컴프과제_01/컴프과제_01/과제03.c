#include <stdio.h>

void main() {
	char sort; //�Է¹��� ����
	sort = getchar(); //getchar()�� ���ڸ� �Է¹���.
	puts("���ڸ� �����Ѵ�.");
	printf("Left\t:%c\n", sort);	//����
	printf("Middle\t:\t%c\n", sort);//���
	printf("Right\t:\t\t%c\n", sort);//������
}