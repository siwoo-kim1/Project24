
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int a = 0;
	int b = 0;
	do {
		printf("[1] 비트 AND(&)\n");
		printf("[2] 비트 OR(|)\n");
		printf("[3] 비트 XOR(^)\n");
		printf("[4] 비트 COMPLEMENT(~)\n");
		printf("[0] 종료(stop)\n");
		printf("위 연산 중 하나를 선택하세요. >>");
		scanf("%d", &num);

		if (num == 1) {
			printf("비트 연산할 두 정수 입력 >> ");
			scanf("%d %d", &a, &b);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");
			printf("b = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((b >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", b);
			puts("");
			puts("");
			puts("");
			printf(" a & b =  ");

			int z = a & b;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 2) {
			printf("비트 연산할 두 정수 입력 >> ");
			scanf("%d %d", &a, &b);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");
			printf("b = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((b >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", b);
			puts("");
			puts("");
			puts("");
			printf(" a | b =  ");

			int z = a | b;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 3) {
			printf("비트 연산할 두 정수 입력 >> ");
			scanf("%d %d", &a, &b);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");
			printf("b = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((b >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", b);
			puts("");
			puts("");
			puts("");
			printf(" a ^ b =  ");

			int z = a ^ b;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 4) {
			printf("비트 보수 연산할 하나의 정수 입력 >> ");
			scanf("%d", &a);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");

			printf("a =  ");

			int z = ~a;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 0) {
			printf("종료합니다.\n");
			break;
		}
	} while (1);
}
