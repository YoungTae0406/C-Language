#include<stdio.h>
#include<time.h>

void setNumber();
int number;
void main() {
	int answer;
	printf("1 에서 100 까지의 하나의 정수가 결정됨.");
	printf("정수를 맞추셈");
	setNumber();
	int min = 1, max = 100;
	static int trycount = 0;
	while (1) {
		scanf_s("%d", &answer);
		if (answer < 0 || answer>100) {
			printf("다시 해");
			continue;
		}
		if (trycount > 5) {
			break;
		}
		
		if (answer > number) {
			printf("%d보다 작습니다", answer);
			max = answer - 1;
			printf("%d과 %d사이임", min, max);
			printf("%d번 시도함", ++trycount);
		}
		else if(answer < number){
			printf("%d보다 큽니다.", answer);
			min = answer + 1;
			printf("%d와 %d사이임", min, max);
			printf("%d번 시도함", ++trycount);
		}
		else {
			printf("맞춤 ㅊㅊ");
			printf("%d번 시도함", ++trycount);
			break;
		}
	}

}
void setNumber() {
	srand(time(NULL));
	number = rand() % 100 + 1;

}