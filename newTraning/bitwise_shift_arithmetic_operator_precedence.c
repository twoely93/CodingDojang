#include <stdio.h>

int main()
{
	int num1 = 1;
	int num2 = 2;
	int num3, num4;

	num3 = num1 << 2 + num2 << 1;
	num4 = (num1 << 2) + (num2 << 1);
	printf("%d, %d\n", num3, num4);
	return 0;
}