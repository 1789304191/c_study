#include <stdio.h>
#define N 3

//结构体类型
struct Student
{
	//学号
	int num;
	//姓名
	char name[20];
	//成绩
	float score[3];
	//平均分
	float average;
};

//int main() {
//	void input(struct Student stu[]);
//	struct Student max_struct(struct Student stu[]);
//	void print(struct Student stu);
//	struct Student stu[3];
//	struct Student *p;
//	p = stu;
//	//这里传入stu和p都行
//	input(stu);
//	print(max_struct(stu));
//}

void input(struct Student stu[])
{
	printf("请输入学号姓名各科成绩：");
	for (int i = 0; i < N; i++) {
		//为什么要加20 https://baike.baidu.com/item/scanf_s
		scanf_s("%d%s%f%f%f", &stu[i].num, stu[i].name,20,//字符数组输入直接用name
			&stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].average = (stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
}

//返回结构体类型 函数形参为student结构体类型数组
struct Student max_struct(struct Student stu[]){
	int m = 0;
	for (int i = 0; i < N; i++) {
		if (stu[i].average > stu[m].average) {
			m = i;
		}
	}
	return stu[m];
}

void print(struct Student stu) {
	printf("\n成绩最高的学生是：\n");
	printf("学号：%d\n姓名：%s\n三门课成绩：%5.1f,%5.1f,%5.1f\n 平均成绩：%6.2f\n",
		stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.average);
}