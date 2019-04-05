#include <stdio.h>

void main() {
	char input;
	int alphacount[26] = {0 ,};

	while (1) {
		printf("소문자를 입력하세요 : ");
		input = getchar();
		rewind(stdin);

		if (97 <= input && input < 123) {
			alphacount[(input-19)%26]++;
		}
		else  {
			printf("\n소문자 알파벳이 아닙니다.");
		}
		if (input == EOF) {
			for (int i = 97; i < 123; i++) {
			printf("[ %c ] = %d\n", i, alphacount[i - 97]);
			}
			break;
		}

	}
	
}