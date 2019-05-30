#include <stdio.h>

void pascaltri(int n);
int binar(int n, int r);
void main() {
	int n=0;
	scanf_s("%d", &n);
	pascaltri(n);
}
void pascaltri(int n) {
	for (int i = 0; i <n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", binar(i, j));

		}
		printf("\n");
	}
}
int binar(int n, int r) {
	int up = 1;
	int down = 1;
	if (n == 0 && r == 0) {
		return 1;
	}

	for (int i = n; i >=1; i--) {
		up *= i;
	}
	
	for (int i = r; i >= 1; i--) {
		down *= i;
	}
	for (int i = n - r; i >= 1; i--) {
		down *= i;
	}
	return up / down;
}