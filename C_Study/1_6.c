#include <stdio.h>
//int main() {
//	int max(int a, int b);
//	int c, d, e;
//	scanf_s("%d,%d,%d", &c, &d, &e);
//	if (c > max(d, e))
//		printf("���ֵ�ǣ�%d\n", c);
//	else
//		printf("���ֵ�ǣ�%d\n", max(d, e));
//}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}