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


//链表排序(从小到大)
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


//链表的节点删除
struct Student * delNode(struct Student * head,struct Student * p) {
	printf("\n删除的指针p是：%d\n", p);
	if (p->next == NULL) {
		return p;
	}
	struct Student * p1;
	struct Student * p2 = NULL;
	//p相当于head
	p1 = head;
	//遍历链表
	while (p1 != NULL && p1 != p) {
		//记录当节点相等时的上一个节点即p2
		p2 = p1;
		p1 = p1->next;
	}
	//如果删除的是头节点
	if (p1 == p) {
		p2 = p1->next;
	}
	else {
		p2->next = p1->next;
	}
	return p2;
}

//链表节点添加
struct Student * insertNode(struct Student * head, struct Student * add) {
	//当前节点
	struct Student * p1;
	//要插入的节点下一个节点
	struct Student * p2 = NULL;
	//要插入的节点上一个节点
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
	//p2->num>add->num(插入的节点为头节点)
	if (p2 == head) {
		add->next = head;
		return add;
	}
	//如果输入的学号最大(插入的节点为倒数第二个节点)
	if (p2 == NULL) {
		p3->next = add;
		add->next = p1;
		return head;
	}
	add->next = p2;
	p3->next = add;
	return head;
}