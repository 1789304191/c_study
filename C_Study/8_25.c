#include <stdio.h>

//返回指针指的函数
//int main() {
//	float a[3][4] = { 61,62,63,64,59,59,58,63,59,100,100,100 };
//	float * search_(float(*pointer)[4], int n);
//	int search_fail(float * p);
//	void show(float * p);
//	float * b;
//	//循环3次查看是否有不及格的学生
//	for (int i = 0; i < 3; i++) {
//		float * b = search_(a, i);
//		if (search_fail(b) != NULL) {
//			printf("成绩不合格的学生号码为：%d\n", i);
//			show(b);
//		}
//	}
//}

//查询某一个学生的成绩
float * search_(float (* pointer)[4],int n) {
	//传入a为行指针，加上*返回列指针
	return *(pointer + n);
}

//查询该学生是否成绩不合格
int search_fail(float * p) {
	//传入a为行指针，加上*返回列指针
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
		//b为列指针，b+i为列元素
		printf("%5.2f  ", *(p + i));
	}
}