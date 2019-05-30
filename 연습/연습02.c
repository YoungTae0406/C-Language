#include <stdio.h>
#include <string.h>
void reverse(char*, int, int);
void main() {
	char string[20] = "";
	scanf_s("%s", string, sizeof(string));
	reverse(string, strlen(string), 1);

}
void reverse(char* str, int size, int count) {
	if (size == count) {
		char temp = str[count-1];
		printf("%c", temp);
		return;
	}
	reverse(str, size, count+1);
	char temp = str[count - 1];
	printf("%c", temp);


}