# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;

void main() {
	char tt[20] = "";
	char ttt[20] = "";
	scanf_s("%s", tt, 20);
	printf("%s\n", tt);

	strcpy_s(ttt, tt, 20);
	printf("%s", ttt);
}