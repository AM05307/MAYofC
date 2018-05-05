#include<stdio.h>
int main() {
	int num; 
	char str[10];
	printf("숫자를 입력하세요\n");
	scanf_s("%d", &num);
	printf("문자를 입력하세요\n");
	scanf_s("%s", str, sizeof(str));
	printf("결과");
	printf("num is %d, str is %s", num, str);

}