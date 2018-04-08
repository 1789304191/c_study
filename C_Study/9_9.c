#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
//分配结构体student大小的空间
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

//定义一个创建动态链表的方法，方法返回head
//动态创建链表
struct Student * create() {
	struct Student * head,* p1,* p2;
	//先分配一个结构体的大小的空间 该方法返回空间的地址，但是不指向任何类型，所以需要强转
	head=(struct Student *)malloc(LEN);
	p2 = head;
	//当输入的参数不为0时
	scanf_s("%d,%f", &head->num, &head->score);
	head->next = NULL;
	//*p2.num p2->num
	while ( p2->num!= 0) {
		p1=(struct Student *)malloc(LEN);
		//将p2的next赋值给新的空间p1
		scanf_s("%d,%f", &p1->num, &p1->score);
		p2->next = p1;
		p1->next = NULL;
		p2 = p1;
	}
	return head;
}

//输出链表
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

//链表的节点删除
struct Student * del(struct Student * p) {
	printf("\n请输入要删除的学号:");
	int num;
	struct Student * p1;
	struct Student * p2 = NULL;
	scanf_s("%d", &num);
	//p相当于head
	p1 = p;
	//遍历链表
	while (p1!=NULL && p1->num!=num) {
		//记录当学号相等时的上一个节点
		p2 = p1;
		p1 = p1->next;
	}
	//指向p1下个节点因为当前p1的学号和输入的相等
	if (p1->num == num ) {
		if (p1 == p) {
			p = p->next;
		}
		else {
			p2->next = p1->next;
		}
	} 
	else {
		printf("\n链表中没有此学号\n");
	}
	return p;
}

//链表节点添加
struct Student * insert(struct Student * head, struct Student * add) {
	printf("\n请输入要添加的结构体：");
	//*add.num=add->num
	scanf_s("%d,%f", &add->num, &add->score);
	//当前节点
	struct Student * p1;
	//要插入的节点下一个节点
	struct Student * p2 = NULL;
	//要插入的节点上一个节点
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