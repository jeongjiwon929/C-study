#include<stdio.h>
int c = 300;
void test(int a) {
	int b = 200;

	printf("test) a : %d, b : %d : c : %d\n", a, b, c);			// �� ���
	pritnf("test) a : %X, b : %X : c : %X\n\n", &a, &b, &c);	// �ּ� ���
	a += 5;
	b += 5;
	c += 5;


	printf("test) a : %d, b : %d : c : %d\n", a, b, c);
	pritnf("test) a : %X, b : %X : c : %X\n\n", &a, &b, &c);
}
int main() {
	int a = 100,b = 200;

	printf("main) a : %d, b : %d : c : %d\n", a, b, c);
	printf("main) a : %X, b : %X : c : %X\n\n", &a, &b, &c);
	test(a);

	printf("main) a : %d, b : %d : c : %d\n", a, b, c);
	printf("main) a : %X, b : %X : c : %X\n\n", &a, &b, &c);

	return 0;
}