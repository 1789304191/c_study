#include <stdio.h>
//int main() {
//	int max(int a, int b);
//	int c, d, e;
//	scanf_s("%d,%d,%d", &c, &d, &e);
//	if (c > max(d, e))
//		printf("最大值是：%d\n", c);
//	else
//		printf("最大值是：%d\n", max(d, e));
//}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}