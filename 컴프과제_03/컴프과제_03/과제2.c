#include <stdio.h>
#include <ctype.h>

void main() { 
	char a, b, c, d, e;
	enum boolean { FALSE, TRUE }; //FALSE���� 0, TRUE���� 1�� ���� �����
	int use = 0;	int use2 = 0; int use3 = 0; int use4 = 0; int use5 = 0;
	a = getchar();  
	b = getchar();  b = getchar(); //\n�� ���๮�ڰ� ���� 
	c = getchar();  c = getchar(); //getchar()�� �� �� �� ���.
	d = getchar();	d = getchar();
	e = getchar();  e = getchar();
	if (isdigit(a) == 0 && (isalpha(a) !=0 || a == '_')) { //ù ��° ���ڿ��� ���ڰ� ������ �ȵ�
		use5 = TRUE; //���ĺ��� _�� ����
	}
	
	if (isalpha(b) != 0 || b == '_' || isdigit(b)!=0 ) {// �� ��° ���ں��ʹ� ���ڿ� ���ĺ� _�� ����
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
	printf("%c %c %c %c %c\n", a, b, c, d, e); //���ڸ� ����Ѵ�.
	if (use&&use2&&use3&&use4&&use5) { //0�� �ƴϸ� true //���Ǿ��� use �������� �� �Ǻ��Ѵ�.
		puts("������ ��밡���ϴ�.");
	}
	else {
		puts("������ ����� �� ����.");
	}
	
}