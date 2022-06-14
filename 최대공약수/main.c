#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, r;

	printf("2Gay의 정수를 yeeㅂ력하시오.(큰거, 작은거)");
	scanf("%d %d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대공약수는 %d 입니다.\n", x);

	return 0;
}