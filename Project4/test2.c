#include<stdio.h>
int main() {
	int num = 5;
	int i = 0;
	do {
		num = i * 10;
		++i;
	} while (num < 10);
	printf("i : %d", i);
}