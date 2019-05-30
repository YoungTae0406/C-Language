#include <stdio.h>
#include<string.h>
#include<math.h>
void printprime(int n);
int ispalindrome(int );

void main() {
	int n;	int palin;
	printf("2부터 몇 개의 소수를 출력해?\n");
	scanf_s("%d", &n);
	printprime(n);
	printf("\n회수인지 검사할 수 입력 : ");
	scanf_s("%d", &palin);
	if (ispalindrome(palin)) {
		printf("회수 입니다.");
	}
	else {
		printf("회수가 아닙니다.");
	}

}
void printprime(int n) {
	int bool = 1; //소수면 참
	int i = 3;	int count = 1;
	printf("%d  ", 2);
	while (n > 1) {
		for (int j = 2; j < i; j++) {
			if (i%j != 0) {
				bool = 1;
			}
			else {
				bool = 0;
				break;
			}
			
		}
		if (bool) {
			printf("%d  ", i);
			n--;
			count = 1;
		}
		if (n % 10 == 0&&count) {
			printf("\n");
			count = 0;
		}
		i++;
	}

}
int ispalindrome(int palin) {
	char reverse[20] = "";
	int i = 0;
	int a=0;
	int temp = palin;
	
	while (palin%10) {
		reverse[i] = palin % 10;
		palin = palin / 10;
		i++;
	}
	double count = strlen(reverse)-1;
	for (int j = 0; j < strlen(reverse); j++) {
		a += reverse[j] * pow(10.0, count);
		count--;
	}
	if (a == temp) {
		return 1;
	}
	else {
		return 0;
	}

}
