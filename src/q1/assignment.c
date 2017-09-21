#include <stdio.h>

int main(int arg, char* argc[]){
	int a = 0;
	int* b = 0;
	long c = 0;
	double * d = 0;
	char** e = 0;

	printf("Int: %d \n", sizeof(a));
	printf("Int*: %d \n", sizeof(b));
	printf("Long: %d \n", sizeof(c));
	printf("Double *: %d \n", sizeof(d));
	printf("Char**: %d \n", sizeof(e));

}
