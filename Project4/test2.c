#include<stdio.h>
int main() {
	int num = 10;
	int i = 0;
	do {
		num = i * 10;
		++i;
	} while (num < 100);
	printf("i : %d \n", i);
}