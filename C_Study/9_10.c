#include <stdio.h>
#include "Student.h"

extern struct Student * del(struct Student * p);
extern struct Student * insert(struct Student * head, struct Student * add);
extern struct Student * create();
void print_(struct Student * p);


int main() {
	struct Student * sortlinkedList(struct Student * head);
	struct Student * p=create();
	print_(sortlinkedList(p));
	return 0;
}


//��������(��С����)
struct Student * sortlinkedList(struct Student * head)
{
	struct Student * delNode(struct Student * head, struct Student * p);
	struct Student * insertNode(struct Student * head, struct Student * add);
	struct Student * p0, *p1;
	struct Student *p2 = NULL;;
	p0 = head;
	p1 = head;
	print_(p1);
	while (p0!= NULL) {
		p1= delNode(p1,p0);
		p1= insertNode(p1, p0);
		p0=p0->next;
		print_(p1);
	}
	return p1;
};


//����Ľڵ�ɾ��
struct Student * delNode(struct Student * head,struct Student * p) {
	printf("\nɾ����ָ��p�ǣ�%d\n", p);
	if (p->next == NULL) {
		return p;
	}
	struct Student * p1;
	struct Student * p2 = NULL;
	//p�൱��head
	p1 = head;
	//��������
	while (p1 != NULL && p1 != p) {
		//��¼���ڵ����ʱ����һ���ڵ㼴p2
		p2 = p1;
		p1 = p1->next;
	}
	//���ɾ������ͷ�ڵ�
	if (p1 == p) {
		p2 = p1->next;
	}
	else {
		p2->next = p1->next;
	}
	return p2;
}

//����ڵ����
struct Student * insertNode(struct Student * head, struct Student * add) {
	//��ǰ�ڵ�
	struct Student * p1;
	//Ҫ����Ľڵ���һ���ڵ�
	struct Student * p2 = NULL;
	//Ҫ����Ľڵ���һ���ڵ�
	struct Student * p3 = NULL;
	p1 = head;
	while (p1->next != NULL) {
		if (p1->num > add->num) {
			p2 = p1;
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