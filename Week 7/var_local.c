// var_local.c
#include <stdio.h>


int Sum(int x, int y) {
	return x + y; // =0 안하면 0or null
}

int main(void) {
	int a = 3,
		b = 5; // 지역변수
	
	printf("%d + %d = %d", a, b, Sum(a, b));

	getch();

	return 0;
}