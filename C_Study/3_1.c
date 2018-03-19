#include <math.h>
#include <stdio.h>

//int main() {
//	float p, r, n;
//	r = 0.1;
//	n = 10;
//	p = pow(1+r,10);
//	printf("p=%f\n", p);
//	return 0;
//	//在编译时利率会按双精度处理，在像float单精度赋值时可能会损失精度，所以会出现警告
//	//如果想去掉警告可以定义为double,float只能保证6位有效数字
//}

//int main() {
//	float d = 300000, p = 6000, r = 0.01, m;
//	m = log(p / (p - d * r)) / log(1 + r);
//	printf("m=%6.1f\n", m);
//	return 0;
//}

//int main() {
//	//printf("size=%d", sizeof(int));
//	//return 0;
//	//unsigned char c = 128;
//	char c = 128;
//	printf("%d:%c\n", c, c);
//	//输出是-128，在存储单元中是用整数的补码存放，128的补码是他的二进制10000000，
//	//转换成10进制，是-128
//}