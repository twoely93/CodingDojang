#include <stdio.h>

int main()
{
	int num1;
	int num2 = 3;
	int num3;
	num1 = 10 + 2 / (5 - 3) * ++num2;
	num3 = 2 / 8;
	printf("%d, %d\n", num1, num3);
	


	return 0;
}