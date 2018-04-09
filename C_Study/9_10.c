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


