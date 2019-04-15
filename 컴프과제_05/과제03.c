#include <stdio.h>

int check_data(int year, int month, int day) {
	enum boolean { False, True }; //boolean ����
	int multiple4year = 0; int dayvalid = 0; //multiple4year�� ������ Ȯ���ϴ� boolean 
	//dayvalid�� ��ȿ�� ��¥���� Ȯ��
	if (year % 4 == 0) {//����
		multiple4year = True;
	}
	else multiple4year = False;
	switch (month) { //switch�� ���
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: {//31
		if (1 <= day && day <= 31) { // ���� �ش��ϴ� �͵��� 31�ϱ�����
			dayvalid = True;
		}
	}
	case 4: case 6: case 9: case 11: {//30
		if (1 <= day && day <= 30) { //���� �ش��ϴ� �͵��� 30�ϱ�����
			dayvalid = True;
		}
	}
	case 2: {//28
		if (multiple4year) {//�����̸�
			if (1 <= day && day <= 29) {//29�ϱ��� ����
				dayvalid = True;
			}
		}
		if (1 <= day && day <= 28) {//�ƴ϶�� 28�ϱ���
			dayvalid = True;
		}
	}
	}
	if (dayvalid) {//��ȿ�ϸ� 1�� ����
		return 1;
	}
	else return 0;//�ƴϸ� 0�� ����

}
void main() {
	int year, month, day;
	puts("Ȯ�ιް� ���� ��, �� ,���� �Է��ϼ���");
	puts("����Ű�� 0000 00 00");
	scanf_s("%d %d %d", &year, &month, &day);
	while (1) {
		if (check_data(year, month, day)) {//check_data�� 1�� �����ϸ� ������ ����
			puts("��ȿ�� ��¥�Դϴ�.");
			scanf_s("%d %d %d", &year, &month, &day);
		}
		else {//1�� �������� ������
			puts("�߸��� ��¥�Դϴ�. �ٽ� �Է��ϼ���");
			scanf_s("%d %d %d", &year, &month, &day);
		}
		if (year == 0 && month == 0 && day == 0) {//0�� �ۼ��� �� ����
			break;
		}
	}

}