#include <stdio.h>
//ð������
int main() {
	int i,add,a[12] = { 2,4,1,12,13,80,40,22,13,44,0};
	void sort(int array[],int n);
	printf("ԭʼ������\n");
	for (i = 0; i <= 11; i++) {
		printf("%5d", a[i]);
	}
	sort(a,11);
	printf("\n������������:\n");
	scanf_s("%d",&add);
	printf("�������������:%d\n",add);
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
	printf("\nԭʼ���ݴ�С�����������\n");
	for (i = 0; i <= n; i++) {
		printf("%5d", array[i]);
	}
}


