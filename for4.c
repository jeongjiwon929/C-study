#include<stdio.h>
int main() {
	// ex04.c - ���ڿ� �ݺ���

	int length = 20;
	char str[20] = "Hello, World !!";
	
	for (int i = 0; i < length; i++) { // i : 0 ~ 19
		char ch = str[i];
		printf("str[%d] : %c\n", i, ch);
		if (ch == '\0') { 
			break;
		}
	}
	printf("\n");
	printf("%s\n\n", str);

	char str2[200] = { 'H', 'e', 'l','l' ,'w', 'o', 'r','l', 'd', '\0' };
	printf("str2 : %s\n", str2);
	
	str2[11] = '\n';
	printf("str2 : %s\n", str2);


	pirntf("\n=== ���� ===\n");
	return 0;
}