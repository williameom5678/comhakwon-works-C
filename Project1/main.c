#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, result;
	printf("2Gay�� ������ �Է��ϰŶ�: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d", x, y, result); //���ϱ�
	result = x - y;
	printf("%d - %d = %d", x, y, result); //����
	result = x * y;
	printf("%d x %d = %d", x, y, result); //���ı�
	result = x / y;
	printf("%d / %d = %d", x, y, result); //������
	result = x % y;
	printf("%d %% %d = %d", x, y, result); //������ ������

	return 0;
}