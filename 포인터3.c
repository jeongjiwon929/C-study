#include<stdio.h>
int main() {
	
	int n1 = 10, n2 = 20;
	printf("n1�� �� : %d\n", n1);
	printf("n1�� �ּ� : %lld\n", &n1);

	int* p;
	p = &n1;
	printf("p�� (�ּ�) �� : %lld\n", p);

	printf("n1�� �� : %d\n", *p);

	*p += 15;
	printf("n1�� �� : %d\n", *p);
	printf("n1 : %d\n", n1);
	return 0;
}