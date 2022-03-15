#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, result;
	printf("2Gay의 정수를 입력하거라: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d", x, y, result); //더하기
	result = x - y;
	printf("%d - %d = %d", x, y, result); //빼기
	result = x * y;
	printf("%d x %d = %d", x, y, result); //고파기
	result = x / y;
	printf("%d / %d = %d", x, y, result); //나누기
	result = x % y;
	printf("%d %% %d = %d", x, y, result); //나누기 나머지

	return 0;
}