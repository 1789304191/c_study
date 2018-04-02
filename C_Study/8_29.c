#include <stdio.h>

//指向指针数据的指针 **
//int main() {
//	int a[5] = { 1,3,5,7,9 };
//	//指针数组
//	int * num[5] = { &a[0],&a[1], &a[2], &a[3], &a[4] };
//	//指向指针数据的变量
//	int **p;
//	printf("%d\n", a + 1);
//	printf("%d\n", &a[1]);
//	//num是指向&a[0]的地址
//	printf("%d\n", *num);
//	printf("%d\n", *a);
//	printf("%d\n", *(a+0));
//	printf("%d\n", a[0]);
//	//num[0]是a[0]的地址
//	num[0] = &a[0];
//	//*p是num[0]的值
//	p = num;
//	//**p则为1
//	printf("%d\n", **p);
//	for (int i = 0; i < 5; i++,p++) {
//		printf(" %d", **p);
//	}
//	return 0;
//}