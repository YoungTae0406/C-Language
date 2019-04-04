#include <stdio.h>
#include <ctype.h>

void main() { 
	char a, b, c, d, e;
	enum boolean { FALSE, TRUE }; //FALSE에는 0, TRUE에는 1의 값이 저장됨
	int use = 0;	int use2 = 0; int use3 = 0; int use4 = 0; int use5 = 0;
	a = getchar();  
	b = getchar();  b = getchar(); //\n의 개행문자가 들어가서 
	c = getchar();  c = getchar(); //getchar()을 한 번 더 썼다.
	d = getchar();	d = getchar();
	e = getchar();  e = getchar();
	if (isdigit(a) == 0 && (isalpha(a) !=0 || a == '_')) { //첫 번째 문자에는 숫자가 나오면 안됨
		use5 = TRUE; //알파벳과 _은 가능
	}
	
	if (isalpha(b) != 0 || b == '_' || isdigit(b)!=0 ) {// 두 번째 문자부터는 숫자와 알파벳 _이 가능
		use = TRUE;
	}
	
	if (isalpha(c) != 0 || c == '_'|| isdigit(c) != 0) {
		use2 = TRUE;
	}
	
	if (isalpha(d) != 0 || d == '_'|| isdigit(d) != 0) {
		use3 = TRUE;
	}
	if (isalpha(e) != 0 || e == '_' || isdigit(e) != 0) {
		use4 = TRUE;
	}
	printf("%c %c %c %c %c\n", a, b, c, d, e); //문자를 출력한다.
	if (use&&use2&&use3&&use4&&use5) { //0이 아니면 true //사용되었던 use 변수들을 다 판별한다.
		puts("변수로 사용가능하다.");
	}
	else {
		puts("변수로 사용할 수 없다.");
	}
	
}