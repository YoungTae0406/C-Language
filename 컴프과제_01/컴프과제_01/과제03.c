#include <stdio.h>

void main() {
	char sort; //입력받을 문자
	sort = getchar(); //getchar()로 문자를 입력받음.
	puts("문자를 정렬한다.");
	printf("Left\t:%c\n", sort);	//왼쪽
	printf("Middle\t:\t%c\n", sort);//가운데
	printf("Right\t:\t\t%c\n", sort);//오른쪽
}