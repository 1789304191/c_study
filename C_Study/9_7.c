#include <stdio.h>
#define N 3

//�ṹ������
struct Student
{
	//ѧ��
	int num;
	//����
	char name[20];
	//�ɼ�
	float score[3];
	//ƽ����
	float average;
};

//int main() {
//	void input(struct Student stu[]);
//	struct Student max_struct(struct Student stu[]);
//	void print(struct Student stu);
//	struct Student stu[3];
//	struct Student *p;
//	p = stu;
//	//���ﴫ��stu��p����
//	input(stu);
//	print(max_struct(stu));
//}

void input(struct Student stu[])
{
	printf("������ѧ���������Ƴɼ���");
	for (int i = 0; i < N; i++) {
		//ΪʲôҪ��20 https://baike.baidu.com/item/scanf_s
		scanf_s("%d%s%f%f%f", &stu[i].num, stu[i].name,20,//�ַ���������ֱ����name
			&stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].average = (stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
}

//���ؽṹ������ �����β�Ϊstudent�ṹ����������
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
	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%5.1f,%5.1f,%5.1f\n ƽ���ɼ���%6.2f\n",
		stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.average);
}