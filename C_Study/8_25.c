#include <stdio.h>

//����ָ��ָ�ĺ���
//int main() {
//	float a[3][4] = { 61,62,63,64,59,59,58,63,59,100,100,100 };
//	float * search_(float(*pointer)[4], int n);
//	int search_fail(float * p);
//	void show(float * p);
//	float * b;
//	//ѭ��3�β鿴�Ƿ��в������ѧ��
//	for (int i = 0; i < 3; i++) {
//		float * b = search_(a, i);
//		if (search_fail(b) != NULL) {
//			printf("�ɼ����ϸ��ѧ������Ϊ��%d\n", i);
//			show(b);
//		}
//	}
//}

//��ѯĳһ��ѧ���ĳɼ�
float * search_(float (* pointer)[4],int n) {
	//����aΪ��ָ�룬����*������ָ��
	return *(pointer + n);
}

//��ѯ��ѧ���Ƿ�ɼ����ϸ�
int search_fail(float * p) {
	//����aΪ��ָ�룬����*������ָ��
	for (int j = 0; j < 4; j++) {
		if (*(p +j) < 60) {
			return *(p + j);
			break;
		}
	}
	return NULL;
}

void show(float * p) {
	for (int i = 0; i < 4; i++) {
		//bΪ��ָ�룬b+iΪ��Ԫ��
		printf("%5.2f  ", *(p + i));
	}
}