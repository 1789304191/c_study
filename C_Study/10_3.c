#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	void sortArray(char p[], int n);
	void printArray(char p[][10], int n);
	void writeToFile(char p[][10], int n);
	int n = 0;
	char a[5][10];
	//输入五个字符串
	while (n<5) {
		//*a=a[0] a[0]+0=a[0][0]
		gets_s(a+n, 10);
		n++;
	}
	sortArray(a, 5);
	writeToFile(a, 5);
	return 0;
}

//数组排序 数组形参不分配内存空间所以一维数组可以省略
//该函数的参数可以是指向一维数组的变量char (*p)[10]
//也可以是char p[][10]
void sortArray(char (*p)[10], int n) {
	//这里无法使用指针，因为是值传递
	char temp[10];
	char * next = NULL;
	char * p0 = p;
	for (int i = 0; i < n; p++, i++) {
		for (int j=0; j < n - i - 1; j++) {
			next = p + j + 1;
			//如果字符串1大于字符串2 则交换
			printf("\na=%s,b=%s\n",p, next);
			if (strcmp(p, next)>0) {
				//将p字符串复制到临时子浮窗temp中
				strcpy_s(temp, 10, p);
				//将next字符串复制到临时子浮窗p中
				strcpy_s(p, 10, next);
				//将temp字符串复制到临时子浮窗next中
				strcpy_s(next, 10, temp);
				printArray(p0, 5);
			}
		}
	}
}

void printArray(char p[][10], int n) {
	for (int i = 0; i < n; i++,p++) {
		//p表示p[1]的首地址
		printf("%s", p);
	}
}

void writeToFile(char p[][10], int n) {
	FILE * file;
	errno_t error;
	//将字符串输入到文件中
	if ((error = fopen_s(&file, "file3.dat", "w")) != 0) {
		printf("\n无法打开此文件\n");
		exit(0);
	};
	int i = 0;
	while (i < 5) {
		printf("\nb=%s\n", p);
		fputs(p, file);
		//a++会出错 因为a不变
		fputs("\n", file);
		p++;
		i++;
	}
	fclose(file);
}

/*

char * string="i love china";
相当于把字符串第一个元素的地址赋值给字符指针变量string

不能用赋值语句将一个字符串常量或者字符数组直接赋给数组
str1="china"
str1=str2 是错误的用法

char * string = "i love china";
char * next;
next = string;
printf("%s",next); 这样是对的
*/