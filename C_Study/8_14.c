#include <stdio.h>

//�����ά��������һ������һ�е�ֵ
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
//void search(float (*p)[4], int n) {//p��ָ�����4��Ԫ�ص�һά����
//	for (int i = 0; i < 4; i++) {
//		printf("%5.2f  ", *(*(p + n) + i));
//	}
//	printf("\n");
//}
//
////�󲻼����ѧ����������ĳɼ�������60�֣�
//void failed(float(*p)[4]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j=0; j < 4; j++) {
//			if (*(*(p + i) + j) < 60) {
//				//�����ѧ���ĳɼ�
//				search(p, i);
//				j = 4;
//			}
//		}
//	}
//}
