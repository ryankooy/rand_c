#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
	int foo;
	int bar = 1;
	int a = 0, b = 1, c = 2, d = 3, e = 4;
	a = b - c + d * e;
	printf("%d", a);
	return 0;
}