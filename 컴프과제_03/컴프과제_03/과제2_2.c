#include <stdio.h>

void main() {
	char a, b, c, d, e;
	enum boolean { FALSE, TRUE }; //FALSE���� 0, TRUE���� 1�� ���� �����
	int use = 0;	int use2 = 0; int use3 = 0; int use4 = 0; int use5 = 0;
	a = getchar();
	b = getchar();  b = getchar(); //\n�� ���๮�ڰ� ���� 
	c = getchar();  c = getchar();  //getchar()�� �� �� �� ���.
	d = getchar();	d = getchar();
	e = getchar();  e = getchar();

	if ((65 <= a && a <= 90)|| a==95 || (97 <= a && a <= 122)) { //ù��°���� ���ڰ� ���� �ȵȴ�. �װ� �ƽ�Ű�ڵ带 ���� ����
		use5 = TRUE;
	}
	if ((48 <= b && b <= 57)||(65 <= b && b <= 90)|| (b == 95)|| (97 <= b && b <= 122)){ //�� ��°�����ʹ� ���ڿ� ���ĺ�, _�� ������.
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
	if (use&&use2&&use3&&use4&&use5) { //�� true���� ������ ���� ��.
		puts("������ ��밡���ϴ�.");
	}
	else {
		puts("������ ����� �� ����.");
	}
}