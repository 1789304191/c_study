#include <stdio.h>
//冒泡排序
//int main() {
//	int i, temp, a[11] = { 2,4,1,12,13,80,40,22,13,44,0 };
//	/*for (i = 1; i <= 10; i++) {
//		printf("输入a[%d]:", i);
//		scanf_s("%d", &a[i]);
//	}*/
//	printf("原始数据是\n");
//	for (i = 1; i <= 10; i++) {
//		printf("%5d", a[i]);
//	}
//	for (i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 10 - i; j++) {
//			if (a[i] > a[i + j]) {
//				temp = a[i + j];
//				a[i + j] = a[i];
//				a[i] = temp;
//			}
//		}
//	}
//	printf("从小到大排序后是\n");
//	for (i = 1; i <= 10; i++) {
//		printf("%5d", a[i]);
//	}
//
//}