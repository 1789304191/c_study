#include <stdio.h>

//输出二维数组任意一行任意一列的值
//int main() {
//	float a[3][4] = { 61,62,63,64,59,59,58,63,59,100,100,100 };
//	void average(float *p, int n);
//	void search(float(*p)[4], int n);
//	void failed(float(*p)[4]);
//	/*average(*a,12);
//	search(a, 2);*/
//	failed(a);
//}
//
//void average(float *p,int n) {
//	float sum = 0;
//	for (int i = 0; i < n; i++) {
//		printf("%5.2f\n", *(p + i));
//		sum += *(p + i);
//	}
//	printf("averge=%5.2f\n", sum / n);
//}
//
//void search(float (*p)[4], int n) {//p是指向具有4个元素的一维数组
//	for (int i = 0; i < 4; i++) {
//		printf("%5.2f  ", *(*(p + n) + i));
//	}
//	printf("\n");
//}
//
////求不及格的学生并输出他的成绩（低于60分）
//void failed(float(*p)[4]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j=0; j < 4; j++) {
//			if (*(*(p + i) + j) < 60) {
//				//输出该学生的成绩
//				search(p, i);
//				j = 4;
//			}
//		}
//	}
//}
