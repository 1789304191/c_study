#include <stdio.h>

//ָ��ָ�����ݵ�ָ�� **
//int main() {
//	int a[5] = { 1,3,5,7,9 };
//	//ָ������
//	int * num[5] = { &a[0],&a[1], &a[2], &a[3], &a[4] };
//	//ָ��ָ�����ݵı���
//	int **p;
//	printf("%d\n", a + 1);
//	printf("%d\n", &a[1]);
//	//num��ָ��&a[0]�ĵ�ַ
//	printf("%d\n", *num);
//	printf("%d\n", *a);
//	printf("%d\n", *(a+0));
//	printf("%d\n", a[0]);
//	//num[0]��a[0]�ĵ�ַ
//	num[0] = &a[0];
//	//*p��num[0]��ֵ
//	p = num;
//	//**p��Ϊ1
//	printf("%d\n", **p);
//	for (int i = 0; i < 5; i++,p++) {
//		printf(" %d", **p);
//	}
//	return 0;
//}