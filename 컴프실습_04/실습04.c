#include <stdio.h>
#include <ctype.h>
void main() {
	char inputchar[5];
	int num[5];	int count = 0;
	enum boolean {FALSE, TRUE};
	int j = 0;

	for (int i = 0; i < 5; i++) {
		printf("[ %d ]번째 문자 입력 : ",i);
		inputchar[i] = getchar();
		rewind(stdin); //입력

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
		printf("입력받은 변수의 이름은 ");
		printf("%c", inputchar[j]);
		printf("입니다.\n");
		j++;
	}
	if (count == 5) {
		printf("입력된 변수명은 사용할 수 있습니다.");
	}
	else {
		printf("입력된 변수명은 사용할 수 없습니다.");
	}
	
}