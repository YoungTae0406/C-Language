#include <stdio.h>

float getMin(float f1, float f2, float f3) { // 최소값
	if (f1 <= f2 && f1 <= f3) {
		return f1;
	}
	if (f2 <= f1 && f2 <= f3) {
		return f2;
	}
	if (f3 <= f1 && f3 <= f2) {
		return f3;
	}
}
float getMax(float f1, float f2, float f3) { // 최대값
	if (f1 >= f2 && f1 >= f3) {
		return f1;
	}
	if (f2 >= f1 && f2 >= f3) {
		return f2;
	}
	if (f3 >= f1 && f3 >= f2) {
		return f3;
	}
}
float getMid(float f1, float f2, float f3) { //중간값
	if (f1 <= f2 && f2 <= f3) {
		return f2;
	}
	if (f1 <= f3 && f3 <= f2) {
		return f3;
	}
	if (f2 <= f1 && f1 <= f3) {
		return f1;
	}
	if (f3 <= f1 && f1 <= f2) {
		return f1;
	}
	if (f3 <= f2 && f2 <= f1) {
		return f2;
	}
	if (f2 <= f3 && f3 <= f1) {
		return f3;
	}

}
void main() {
	float f1, f2, f3;
	puts("float 세 수를 입력하세요");
	scanf_s("%f %f %f", &f1, &f2, &f3);

	printf("%f %f %f의 순서이고, 최소, 최대, 중간값은 %f %f %f입니다.\n"
		, f1, f2, f3, getMin(f1, f2, f3), getMax(f1, f2, f3), getMid(f1, f2, f3));
}
