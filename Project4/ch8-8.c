#include<stdio.h>
int main() {
	char *name[4] = { "Dominico Ji", "Dominica Kim", "millo" ,"RooRi lee" };
	printf("*name[4] sizef =%d", sizeof(name));
	char name2[][13] = { "Dominico Ji", "Dominica Kim", "millo", "RooRi lee" };
	printf("name2[][13] size =%d", sizeof(name2));
	return  0;
}