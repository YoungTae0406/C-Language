#include<stdio.h>
#include<time.h>

void setNumber();
int number;
void main() {
	int answer;
	printf("1 ���� 100 ������ �ϳ��� ������ ������.");
	printf("������ ���߼�");
	setNumber();
	int min = 1, max = 100;
	static int trycount = 0;
	while (1) {
		scanf_s("%d", &answer);
		if (answer < 0 || answer>100) {
			printf("�ٽ� ��");
			continue;
		}
		if (trycount > 5) {
			break;
		}
		
		if (answer > number) {
			printf("%d���� �۽��ϴ�", answer);
			max = answer - 1;
			printf("%d�� %d������", min, max);
			printf("%d�� �õ���", ++trycount);
		}
		else if(answer < number){
			printf("%d���� Ů�ϴ�.", answer);
			min = answer + 1;
			printf("%d�� %d������", min, max);
			printf("%d�� �õ���", ++trycount);
		}
		else {
			printf("���� ����");
			printf("%d�� �õ���", ++trycount);
			break;
		}
	}

}
void setNumber() {
	srand(time(NULL));
	number = rand() % 100 + 1;

}