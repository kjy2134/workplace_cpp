#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef unsigned char* pointer;

void show_bit(pointer l_b, int num) {
	printf("%.4x\n", num & 0xffff);
	for (int i= 0; i < sizeof(unsigned int); i++) {
		printf("%.2x\n", l_b[i]);
	}
}

int main() {
	int a = 15213;
	long b = 1;
	show_bit((pointer)&a, a);
	printf("%d\n", sizeof(b));
	printf("%d", sizeof(double));
}