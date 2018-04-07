#include <stdio.h>

struct Student
{
	int num;
	float score;
	//结构体类型指针变量
	struct Student * next;
};

//int main() {
//	struct Student a, b, c, * head,*p;
//	a.num = 10001; a.score = 100.0;
//	b.num = 10002; b.score = 200.0;
//	c.num = 10003; c.score = 300.0;
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;
//	do {
//		printf("%d,%5.1f\n", p->num, p->score);
//		p = p->next;
//	} while (p != NULL);
//	return 0;
//
//}