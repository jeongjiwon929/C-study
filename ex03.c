#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int n;
	srand(time(NULL));

	printf("�� ���� ������ �ʿ��մϱ� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int ran = rand();
		ran = ran % 45; // 0 ~ 45
		ran += 1;
		printf("%d ", ran);
		// �ݺ����� ���ӹ��忡�� �ݵ�� Ƚ������ i�� �����ؾ� �ϴ� �� �ƴϴ�
		// printf("ran : %d\n", ran);	// ��� ���������� �ۿ��� ���� �Ұ�
	}
	 
	return 0;
}