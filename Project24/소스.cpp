#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a=0;
	int b=0;
	int dump = 0;
	int num = 0;


	printf("��ȯ�� �� ������ �Է��ϼ���. >>");
	scanf("%d %d", &a, &b);

	printf("�Է��� �� ��: a = %d and b = %d\n", a, b);

	printf("�ӽ� ���� ���   �̿� ���[1]\n");
	printf("������ ��������  ��ȯ ���[2]\n");
	printf("������ ���������� ��ȯ ���[3]\n");
	printf("XOR ������       �̿� ���[4]\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
	scanf("%d", &num);
	if (num == 1) {
		dump = a;
		a = b;
		b = dump;
	}
	else if (num == 2) {
		a = a + b;
		b = a - b;
		a = a - b;

	}
	else if (num == 3) {
		a = a * b;
		b = a / b;
		a = a / b;

	}
	else if (num == 4) {
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	printf("��ȯ�� �� ��: a = %d and b = %d", a, b);

}