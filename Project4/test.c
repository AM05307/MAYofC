#include<stdio.h>
int main() {
	int num; 
	char str[10];
	printf("���ڸ� �Է��ϼ���\n");
	scanf_s("%d", &num);
	printf("���ڸ� �Է��ϼ���\n");
	scanf_s("%s", str, sizeof(str));
	printf("���");
	printf("num is %d, str is %s", num, str);

}