#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
//����ṹ��student��С�Ŀռ�
#define LEN sizeof(struct Student)

//int main() {
//	struct Student * create();
//	void print_(struct Student * p);
//	struct Student * del(struct Student * p);
//	struct Student * insert(struct Student * head, struct Student * add);
//	struct Student * p = create();
//	print_(p);
//	//print_(del(p));
//	print_(insert(p, (struct Student *)malloc(LEN)));
//}

//����һ��������̬����ķ�������������head
//��̬��������
struct Student * create() {
	struct Student * head,* p1,* p2;
	//�ȷ���һ���ṹ��Ĵ�С�Ŀռ� �÷������ؿռ�ĵ�ַ�����ǲ�ָ���κ����ͣ�������Ҫǿת
	head=(struct Student *)malloc(LEN);
	p2 = head;
	//������Ĳ�����Ϊ0ʱ
	scanf_s("%d,%f", &head->num, &head->score);
	head->next = NULL;
	//*p2.num p2->num
	while ( p2->num!= 0) {
		p1=(struct Student *)malloc(LEN);
		//��p2��next��ֵ���µĿռ�p1
		scanf_s("%d,%f", &p1->num, &p1->score);
		p2->next = p1;
		p1->next = NULL;
		p2 = p1;
	}
	return head;
}

//�������
void print_(struct Student * p) {
	if (p->next == NULL)
		printf("p=%d,num=%d,score=%2.1f,next=%d\n", p, p->num, p->score, p->next);
	while (p->next != NULL) {
		printf("p=%d,num=%d,score=%2.1f,next=%d\n", p,p->num, p->score,p->next);
		p = p->next;
		if (p->next == NULL)
			printf("p=%d,num=%d,score=%2.1f,next=%d\n",p,p->num, p->score,p->next);
	}
}

//����Ľڵ�ɾ��
struct Student * del(struct Student * p) {
	printf("\n������Ҫɾ����ѧ��:");
	int num;
	struct Student * p1;
	struct Student * p2 = NULL;
	scanf_s("%d", &num);
	//p�൱��head
	p1 = p;
	//��������
	while (p1!=NULL && p1->num!=num) {
		//��¼��ѧ�����ʱ����һ���ڵ�
		p2 = p1;
		p1 = p1->next;
	}
	//ָ��p1�¸��ڵ���Ϊ��ǰp1��ѧ�ź���������
	if (p1->num == num ) {
		if (p1 == p) {
			p = p->next;
		}
		else {
			p2->next = p1->next;
		}
	} 
	else {
		printf("\n������û�д�ѧ��\n");
	}
	return p;
}

//����ڵ����
struct Student * insert(struct Student * head, struct Student * add) {
	printf("\n������Ҫ��ӵĽṹ�壺");
	//*add.num=add->num
	scanf_s("%d,%f", &add->num, &add->score);
	//��ǰ�ڵ�
	struct Student * p1;
	//Ҫ����Ľڵ���һ���ڵ�
	struct Student * p2 = NULL;
	//Ҫ����Ľڵ���һ���ڵ�
	struct Student * p3 = NULL;
	p1 = head;
	while (p1->next != NULL) {
		if (p1->num > add->num) {
			p2=p1;
			break;
		}
		p3 = p1;
		p1 = p1->next;
	}
	//p2->num>add->num(����Ľڵ�Ϊͷ�ڵ�)
	if (p2 == head) {
		add->next = head;
		return add;
	}
	//��������ѧ�����(����Ľڵ�Ϊ�����ڶ����ڵ�)
	if (p2 == NULL) {
		p3->next = add;
		add->next = p1;
		return head;
	}
	add->next = p2;
	p3->next = add;
	return head;
}