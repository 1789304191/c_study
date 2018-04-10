#include <stdio.h>
#include "Student.h"

/*
	����p=1,2,3,4,5,6;
		p1=p.next;
		p1=2,3,4,5,6;
		p.next=null;
		p=1,null;
		p1=2,3,4,5,6
*/

int main() {
	void print_(struct Student * p);
	struct Student * create();
	struct Student * insertionSortByDesc(struct Student * head);
	struct Student * insertionSortByAsc(struct Student * head);
	struct Student * connect(struct Student * p1, struct Student * p2);
	printf("\n�������һ������:\n");
	struct Student * p1 = create();
	printf("\n������ڶ�������:\n");
	struct Student * p2 = create();
	print_(insertionSortByAsc(connect(p1,p2)));
	return 0;
}


//�����������
struct Student *sortlinkedList(struct Student * head)
{
	struct Student *first;
	struct Student *t;
	struct Student *p=NULL;
	struct Student *q;

	first = head->next;
	head->next = NULL;

	while (first != NULL)
	{
		for (t = first, q = head; ((q != NULL) && (q->score > t->score)); p = q, q = q->next){
		}

		first = first->next;

		//q����head˵��q<t
		if (q == head)
		{
			head = t;
		}
		else
		{
			p->next = t;
		}
		t->next = q;
		printf("\n=================\n");
		print_(head);
	}
	return head;
}

//����������򣨴Ӵ�С��
struct Student * insertionSortByDesc(struct Student * head) {
	struct Student * p0 = NULL;
	struct Student * p1;
	struct Student * p2;
	struct Student * t;
	p1 = head;
	t = p2 = head->next;
	head->next = NULL;
	while (t!= NULL) {
		while (p1 != NULL&&p2->score < p1->score) {
			p0 = p1;
			p1 = p1->next;
		}
		t = t->next;
		if (p1 == head) {
			head = p2;
			p2->next = p1;
		}
		else {
			p0->next = p2;
			p2->next = NULL;
		}
		p1 = head;
		p2 = t;
	}
	return head;
}


//����������򣨴�С����
struct Student * insertionSortByAsc(struct Student * head) {
	struct Student * p;
	struct Student * p0 = NULL;
	struct Student * p1;
	struct Student * p2;
	p1 = head;
	p2 = head->next;
	p = head->next;
	head->next = NULL;
	while (p != NULL) {
		p = p->next;
		while (p1 != NULL && p2->score > p1->score) {
			p0 = p1;
			p1 = p1->next;
		}
		//˵��p2��p1С
		if (p1 == head) {
			head = p2;
			p2->next = p1;
		}
		else {
			p0->next = p2;
			p2->next = NULL;
		}
		p1 = head;
		p2 = p;
	}
	return head;
}

//������������
struct Student * connect(struct Student * p1, struct Student * p2)
{
	struct Student * head = p1;
	struct Student * p0 = NULL;
	do {
		p0 = p1;
		p1 = p1->next;
	} while (p1 != NULL);
	p0->next = p2;
	return head;
};

