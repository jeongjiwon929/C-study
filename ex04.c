#include<stdio.h>
int main() {
	
	char name[20] = "������";
	for (int i = 0; i < 5; i++) {
		printf("%s\n", name);
	}
	printf("\n");

	for (char ch = 'a'; ch <= 'z'; ch++) {
		printf("%c", ch);
		printf("%s", ch == 'z' ? "\n" : ", ");
	}
	printf("\n");

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 100; i++) {
		int num = i + 1;
		if (num % 2 == 0) {
			sum1 += num;
		}
		else {
			sum2 += num;
		}
	}		// ����� �ݺ��� ���� �� �ѹ��� ����Ѵ�
	printf("Ȧ���� �� : %d, ¦���� �� : %d\n\n", sum2, sum1);

	int sum = 0;
	int num;
	printf("���� �Է� : ");;
	scanf_s("%d", &num);
	for (int i = 1; i < num; i++) {
		sum += i;
	}
	printf("1���� %d������ �հ� : %d\n", num, sum);
	return 0;
}