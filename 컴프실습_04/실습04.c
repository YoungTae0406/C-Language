#include <stdio.h>
#include <ctype.h>
void main() {
	char inputchar[5];
	int num[5];	int count = 0;
	enum boolean {FALSE, TRUE};
	int j = 0;

	for (int i = 0; i < 5; i++) {
		printf("[ %d ]��° ���� �Է� : ",i);
		inputchar[i] = getchar();
		rewind(stdin); //�Է�

		if (i == 0) {
			if (isdigit(inputchar[i]) && !isalpha(inputchar[i])) {
				num[i] = TRUE;
				continue;
			}
		}

		if (isalpha(inputchar[i]) != 0 || isdigit(inputchar[i]) !=0 || inputchar[i] == 95) {
			num[i] = TRUE;
		}
		count += num[i];
	}
	while (j < 5) {
		printf("�Է¹��� ������ �̸��� ");
		printf("%c", inputchar[j]);
		printf("�Դϴ�.\n");
		j++;
	}
	if (count == 5) {
		printf("�Էµ� �������� ����� �� �ֽ��ϴ�.");
	}
	else {
		printf("�Էµ� �������� ����� �� �����ϴ�.");
	}
	
}