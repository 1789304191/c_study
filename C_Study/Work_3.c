#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d,%d", &a, &b);
	int z=b;
	while (a%b != 0) {
		z = a % b;
		a = b;
		b = z;
	}
	printf("%d", z);
	return 0;
}