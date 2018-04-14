#include <stdio.h>
#include <stdlib.h>

//int main() {
//	FILE * fp;
//	//用typedef申明新的类型名 代替int
//	errno_t err;
//	char ch, filename[10];
//	scanf_s("%s", filename, 10);
//	//FILE**表示一个指向指针变量的指针，所以这里应该是&fp
//	if ((err = fopen_s(&fp, filename, "w")) != 0){
//		printf("\n无法打开此文件\n");
//		exit(0);
//	}
//	//目的是接收回车键，因为scanf遇见回车就结束一次输入
//	ch = getchar();
//	printf("\n请输入一个准备存储到磁盘的字符串:\n");
//	//可以一次输入多个值到缓冲区中 输入回车之后getchar会去缓冲中取值
//	ch = getchar();
//	while (ch != '#') {
//		fputc(ch, fp);
//		putchar(ch);
//		//取缓冲区中的值
//		ch = getchar();
//	}
//	fclose(fp);
//	putchar(10);
//	return 0;
//}

/*
第一：要注意不同的函数是否接受空格符、是否舍弃最后的回车符的问题!
读取字符时：
scanf()以Space、Enter、Tab结束一次输入，不会舍弃最后的回车符（即回车符会残留在缓冲区中）；
getchar()以Enter结束输入，也不会舍弃最后的回车符；
读取字符串时：
scanf()以Space、Enter、Tab结束一次输入
gets()以Enter结束输入（空格不结束），接受空格，会舍弃最后的回车符！
第二：为了避免出现上述问题，必须要清空缓冲区的残留数据，可以用以下的方法解决：
方法1：C语言里提供了函数清空缓冲区，只要在读数据之前先清空缓冲区就没问题了！
这个函数是fflush(stdin)。
方法2：自己取出缓冲区里的残留数据。
*/