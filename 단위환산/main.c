#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	
	printf("=================\n");
	printf(" nÀÇ     n½Â\n");
	printf("=================\n");

	n = 1;
	while (n <= 19) {
		printf("%5d   %5d\n", n, n * n);
		n++;
	}

	return 0;
}