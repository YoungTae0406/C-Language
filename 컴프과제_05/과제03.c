#include <stdio.h>

int check_data(int year, int month, int day) {
	enum boolean { False, True }; //boolean 변수
	int multiple4year = 0; int dayvalid = 0; //multiple4year은 윤년을 확인하는 boolean 
	//dayvalid는 유효한 날짜인지 확인
	if (year % 4 == 0) {//윤년
		multiple4year = True;
	}
	else multiple4year = False;
	switch (month) { //switch문 사용
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: {//31
		if (1 <= day && day <= 31) { // 여기 해당하는 것들은 31일까지임
			dayvalid = True;
		}
	}
	case 4: case 6: case 9: case 11: {//30
		if (1 <= day && day <= 30) { //여기 해당하는 것들은 30일까지임
			dayvalid = True;
		}
	}
	case 2: {//28
		if (multiple4year) {//윤년이면
			if (1 <= day && day <= 29) {//29일까지 포함
				dayvalid = True;
			}
		}
		if (1 <= day && day <= 28) {//아니라면 28일까지
			dayvalid = True;
		}
	}
	}
	if (dayvalid) {//유효하면 1을 리턴
		return 1;
	}
	else return 0;//아니면 0을 리턴

}
void main() {
	int year, month, day;
	puts("확인받고 싶은 연, 월 ,일을 입력하세요");
	puts("종료키는 0000 00 00");
	scanf_s("%d %d %d", &year, &month, &day);
	while (1) {
		if (check_data(year, month, day)) {//check_data가 1을 리턴하면 조건이 충족
			puts("유효한 날짜입니다.");
			scanf_s("%d %d %d", &year, &month, &day);
		}
		else {//1을 리턴하지 않으면
			puts("잘못된 날짜입니다. 다시 입력하세요");
			scanf_s("%d %d %d", &year, &month, &day);
		}
		if (year == 0 && month == 0 && day == 0) {//0을 작성할 시 종료
			break;
		}
	}

}