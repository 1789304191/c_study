#ifndef _STUDENT_H_
#define _STUDENT_H_

//自定义头文件
struct Student {
	int num;
	float score;
	struct Student * next;
};
#endif