#include<stdio.h>

char* selectMenu(int num) {
	switch (num) {
	case 1: return "�ݶ�";
	case 2: return "���̴�";
	case 3: return "��ī��";
	}
	return "�������� �ùٸ��� �ʽ��ϴ�";
}
int getSquareArea(int length) {
	int area = length * length;
	return area;
}
double getCircleArea(int radius) {
	double area = radius * radius * 3.14;
	return area;
}
int main() {
	int n1 = getSquareArea(3);
	printf("n1 : %d cm��\n", n1);

	double n2 = getCircleArea(6);
	printf("n2 : %.2f cm��\n", n2);

	int n3 = reverseNumber(1234);
	printf("h3 : %d\n", n3);
	return 0;
}