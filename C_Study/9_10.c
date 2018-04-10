#include <stdio.h>
#include "Student.h"

extern struct Student * del(struct Student * p);
extern struct Student * insert(struct Student * head, struct Student * add);
extern struct Student * create();
void print_(struct Student * p);


int main() {
	struct Student * sortlinkedList(struct Student * head);
	struct Student * insertionSort(struct Student * head);
	struct Student * p=create();
	print_(insertionSort(p));
	return 0;
}


//链表插入排序
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

		//q等于head说明q<t
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

//链表插入排序
struct Student * insertionSort(struct Student * head) {
	struct Student * p;
	struct Student * p1;
	struct Student * p2;
	p1 = p = head;
	p2 = p->next;
	while (p->next != NULL) {
		p2 = p;
		while (p2->score < p1->score&&p2->next!=NULL) {
			
		}
		if (p1 == head) {
			head = p2;
		}
		p2->next = p1;
	}
	return head;
}


