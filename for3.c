#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	// ex03.c

	int n;
	srand(time(NULL));

	printf("��� ������ �ʿ��մϱ� : ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {
		int ran = rand();
		ran = ran % 45; // 0 ~ 44
		ran += 1;
		printf("%d ", ran);
		
	}
	// printf("ran : %d\n", ran); // ��� ���������� �ۿ��� �����Ұ�
	return 0;
}