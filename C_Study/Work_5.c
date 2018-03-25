#include <stdio.h>
//冒泡排序
int main() {
	int i,add,a[12] = { 2,4,1,12,13,80,40,22,13,44,0};
	void sort(int array[],int n);
	printf("原始数据是\n");
	for (i = 0; i <= 11; i++) {
		printf("%5d", a[i]);
	}
	sort(a,11);
	printf("\n请输入新数字:\n");
	scanf_s("%d",&add);
	printf("输入的新数字是:%d\n",add);
	a[0] = add;
	for (i = 0; i <= 11; i++) {
		printf("%5d", a[i]);
	}
	sort(a, 11);
	printf("\n");
}

void sort(int array[],int n) {
	int i,temp;
	for (i = 0; i <=n-1; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (array[i] > array[i + j]) {
				temp = array[i + j];
				array[i + j] = array[i];
				array[i] = temp;
			}
		}
	}
	printf("\n原始数据从小到大排序后是\n");
	for (i = 0; i <= n; i++) {
		printf("%5d", array[i]);
	}
}


