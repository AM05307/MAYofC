#include <stdio.h>
int main() {
	printf("char = %d byte  \n", sizeof(char));
	printf("short = %d byte  \n", sizeof(short));
	printf("int = %d byte  \n", sizeof(int));
	printf("long = %d byte \n", sizeof(long));
	printf("float= %d byte \n", sizeof(float));
	printf("sizeof(100+90.2)= %d byte  \n", sizeof(100 + 90.2));
	printf("abcd= %d byte  \n", sizeof "abcd");
}