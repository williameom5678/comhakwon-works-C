#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int id, pass;

	printf("���̵�� ��й�ȣ�� 4�ڸ� ���ڷ� �Է��ϼ���.\n");

	printf("ID: ____\b\b\b\b");
	scanf("%d", &id);

	printf("Password: ____\b\b\b\b");
	scanf("%d", &pass);

	printf("\a�Էµ� ���̵�: \"%d\"\n", id);
	printf("\a�Էµ� ��й�ȣ: \"%d\"\n", pass);
	

	return 0;
}