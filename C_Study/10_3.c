#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	void sortArray(char p[], int n);
	void printArray(char p[][10], int n);
	void writeToFile(char p[][10], int n);
	int n = 0;
	char a[5][10];
	//��������ַ���
	while (n<5) {
		//*a=a[0] a[0]+0=a[0][0]
		gets_s(a+n, 10);
		n++;
	}
	sortArray(a, 5);
	writeToFile(a, 5);
	return 0;
}

//�������� �����ββ������ڴ�ռ�����һά�������ʡ��
//�ú����Ĳ���������ָ��һά����ı���char (*p)[10]
//Ҳ������char p[][10]
void sortArray(char (*p)[10], int n) {
	//�����޷�ʹ��ָ�룬��Ϊ��ֵ����
	char temp[10];
	char * next = NULL;
	char * p0 = p;
	for (int i = 0; i < n; p++, i++) {
		for (int j=0; j < n - i - 1; j++) {
			next = p + j + 1;
			//����ַ���1�����ַ���2 �򽻻�
			printf("\na=%s,b=%s\n",p, next);
			if (strcmp(p, next)>0) {
				//��p�ַ������Ƶ���ʱ�Ӹ���temp��
				strcpy_s(temp, 10, p);
				//��next�ַ������Ƶ���ʱ�Ӹ���p��
				strcpy_s(p, 10, next);
				//��temp�ַ������Ƶ���ʱ�Ӹ���next��
				strcpy_s(next, 10, temp);
				printArray(p0, 5);
			}
		}
	}
}

void printArray(char p[][10], int n) {
	for (int i = 0; i < n; i++,p++) {
		//p��ʾp[1]���׵�ַ
		printf("%s", p);
	}
}

void writeToFile(char p[][10], int n) {
	FILE * file;
	errno_t error;
	//���ַ������뵽�ļ���
	if ((error = fopen_s(&file, "file3.dat", "w")) != 0) {
		printf("\n�޷��򿪴��ļ�\n");
		exit(0);
	};
	int i = 0;
	while (i < 5) {
		printf("\nb=%s\n", p);
		fputs(p, file);
		//a++����� ��Ϊa����
		fputs("\n", file);
		p++;
		i++;
	}
	fclose(file);
}

/*

char * string="i love china";
�൱�ڰ��ַ�����һ��Ԫ�صĵ�ַ��ֵ���ַ�ָ�����string

�����ø�ֵ��佫һ���ַ������������ַ�����ֱ�Ӹ�������
str1="china"
str1=str2 �Ǵ�����÷�

char * string = "i love china";
char * next;
next = string;
printf("%s",next); �����ǶԵ�
*/