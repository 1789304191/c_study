#include <stdio.h>
#include <math.h>

//ɸѡ��
//int main() {
//	//�������ط�����100��ô�������0-99����ôa[100]�ͻᱨ��
//	//��������Ҫ����a[101]
//	int i,n,a[101];
//	for (i = 1; i <= 100; i++) {
//		a[i] = i;
//	}
//	a[1] = 0;
//	for (int j = 2; j < sqrt(100); j++) {
//		if (a[j] == 0) {
//			continue;
//		}
//		n = a[j];
//		for (int k = j + 1; k <= 100; k++) {
//			if (a[k] % n == 0) {
//				a[k] = 0;
//			}
//		}
//	}
//	for (int i = 1,j=0; i <= 100; i++) {
//		if (a[i] != 0) {
//			if (j !=0&&j% 10 == 0) {
//				printf("\n");
//			}
//			printf("%5d,", a[i]);
//			j++;
//		}
//	}
//	return 0;
//}