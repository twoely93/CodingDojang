#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		printf("1입니다.\n");
		break;

	case 2:
		printf("2입니다.\n");
		break;

	case 3:
		printf("3입니다.\n");
		break;

	}
	
	return 0;
}