#include<stdio.h>
int main() {

	for (int i = 0; i < 10; i++) {
		printf("%d", i + 1);
	}
	printf("\n\n");

	for (int i = 0; i < 20; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n\n");

	for (int i = 0; i < 100; i += 7) {
		if (i != 0) {
			printf("%d ", i);
		}
	}
	printf("\n\n");

	int i = 0;
	for (; i < 3; i++) {
		printf("Hello, World\n");
	}
	printf("\n");

	i = 0;
	for (; i < 3;) {
		printf("Hello, %d\n", i++);
	}
	printf("\n");

	for (;;) {	// while(1)
		printf("Infinite Loop !!\n");
	}
	printf("\n");
	// ������ �̹� ����Ǿ� �ְ�, ���� ������ ���� ����

	return 0;
}