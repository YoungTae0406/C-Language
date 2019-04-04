#include <stdio.h>

void main() {
	char a, b, c, d, e;
	enum boolean { FALSE, TRUE }; //FALSE에는 0, TRUE에는 1의 값이 저장됨
	int use = 0;	int use2 = 0; int use3 = 0; int use4 = 0; int use5 = 0;
	a = getchar();
	b = getchar();  b = getchar(); //\n의 개행문자가 들어가서 
	c = getchar();  c = getchar();  //getchar()을 한 번 더 썼다.
	d = getchar();	d = getchar();
	e = getchar();  e = getchar();

	if ((65 <= a && a <= 90)|| a==95 || (97 <= a && a <= 122)) { //첫번째에는 숫자가 들어가면 안된다. 그걸 아스키코드를 통해 지정
		use5 = TRUE;
	}
	if ((48 <= b && b <= 57)||(65 <= b && b <= 90)|| (b == 95)|| (97 <= b && b <= 122)){ //두 번째서부터는 숫자와 알파벳, _이 가능함.
		use = TRUE;
	}
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (c == 95) || (97 <= c && c <= 122)) {
		use2 = TRUE;
	}
	if ((48 <= d && d <= 57) || (65 <= d && d <= 90) || (d == 95) || (97 <= d && d <= 122)) {
		use3 = TRUE;
	}
	if ((48 <= e && e <= 57) || (65 <= e && e <= 90) || (e == 95) || (97 <= e && e <= 122)) {
		use4 = TRUE;
	}
	printf("%c %c %c %c %c\n", a, b, c, d, e);
	if (use&&use2&&use3&&use4&&use5) { //다 true여야 조건이 참이 됨.
		puts("변수로 사용가능하다.");
	}
	else {
		puts("변수로 사용할 수 없다.");
	}
}