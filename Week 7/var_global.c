// var_global.c
#include <stdio.h>

int result = 0;

void Sum(int x, int y) {
	result = x + y; // =0 안하면 0or null
}

int main(void) {
	int a = 3,
		b = 5; // 지역변수
	Sum(a, b);
	printf("%d + %d = %d", a, b, result);

	getch();

	return 0;
}