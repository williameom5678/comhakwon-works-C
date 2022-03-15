#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int id, pass;

	printf("아이디와 비밀번호를 4자리 숫자로 입력하세요.\n");

	printf("ID: ____\b\b\b\b");
	scanf("%d", &id);

	printf("Password: ____\b\b\b\b");
	scanf("%d", &pass);

	printf("\a입력된 아이디: \"%d\"\n", id);
	printf("\a입력된 비밀번호: \"%d\"\n", pass);
	

	return 0;
}