#include <stdio.h>
#include <stdlib.h>

//int main() {
//	FILE * p1;
//	FILE * p2;
//	errno_t err;
//	if ((err = fopen_s(&p1, "file1.dat", "r")) != 0) {
//		printf("\n无法打开此文件\n");
//		exit(0);
//	}
//	if ((err = fopen_s(&p2, "file2.dat", "w")) != 0) {
//		printf("\n无法打开此文件\n");
//		exit(0);
//	}
//	char ch;
//	while ((ch = fgetc(p1)) != -1) {
//		fputc(ch, p2);
//	}
//	fclose(p1);
//	fclose(p2);
//	putchar(10);
//	return 0;
//
//}