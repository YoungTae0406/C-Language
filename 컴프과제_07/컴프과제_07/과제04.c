#include <stdio.h>
#include <string.h>
void main() {
	int bool[] = {0,0,0,0}; //참, 거짓을 판별할 변수
	char password[30] = "";

	printf("패스워드를 입력하세요 -> ");
	scanf_s("%s", password, sizeof(password)); //패스워드를 입력받음
	if (strlen(password) < 10) { //크기가 10을 넘지 않으면
		printf("패스워드 크기는 10 이상이여야 합니다.\n"); //오류의 이유를 출력
	}
	for (int i = 0; i < strlen(password); i++) {//@, #, %가 한번이라도 나오는 지를 확인
		if (password[i] == '@') {
			bool[0] = 1;}
		else if (password[i] == '#') {
			bool[0] = 1;}
		else if (password[i] == '%') {
			bool[0] = 1;}
	}
	if (!bool[0]) {//저것들중 하나도 안나왔다면 bool[0]은 0이 됨
		printf("특수문자 @, #, %% 중 하나는 반드시 포함해야 함\n");
	}
	for (int i = 0; i < strlen(password); i++) {//하나 이상의 숫자, 소문자, 대문자가 있는 지 체크
		if (48 <= password[i] && password[i] <= 57) {//숫자
			bool[1] = 1;}
		else if (65 <= password[i] && password[i] <= 90) {//대문자
			bool[2] = 1;}
		else if (97 <= password[i] && password[i] <= 122) {//소문자
			bool[3] = 1;}
	}
	if (!(bool[1]) || !(bool[2]) || !(bool[3])) {
		printf("하나 이상의 숫자, 소문자, 대문자를 포함해야 함\n");
	}
	bool[1] = 1; bool[2] = 1; bool[3] = 1; //초기화

	for (int i = 0; i < strlen(password)-1; i++) {//연속적으로 나오는 지 확인
		if (48 <= password[i] && password[i] <= 57) {
			if (48 <= password[i+1] && password[i+1] <= 57) {//그 다음 것도 해당되는 지 확인
				bool[1] = 0;
			}
		}
		if (65 <= password[i] && password[i] <= 90) {
			if (65 <= password[i + 1] && password[i + 1] <= 90) {
				bool[2] = 0;
			}
		}
		if (97 <= password[i] && password[i] <= 122) {
			if (97 <= password[i+1] && password[i+1] <= 122) {
				bool[3] = 0;
			}
		}
	}
	if (!(bool[1]) || !(bool[2]) || !(bool[3])) { //bool[1]이 0이 됬다면 위에서 해당된 것이니 조건문이 참이됨
		printf("연속된 2문자 이상은 존재할 수 없다.");
	}
	
}