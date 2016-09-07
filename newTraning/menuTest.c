#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;
	printf("CRYPTO_PROGRAMING \n - produce by twoely\n");
	printf("Choice the menu:\n");
	printf("1.Find Prime Numbers\n2.Vigenere Cipher\n");
	scanf("%d", &num1);
	
	switch(num1)
	{
		case 1:
		{
			Prime_Numbers();
			break;
		}
	}

	return 0;
}

int Prime_Numbers(void)
{
	int i = 0, j = 0;
	int p_num1 = 0;
	int p_num2 = 0;
	// for문을 이용한 소수 구하기
	printf("for문을 이용한 소수 구하기\n");
	printf("시작 :");
	scanf("%d", &p_num1);
	printf("종료 :");
	scanf("%d", &p_num2);
	for (i = p_num1; i <= p_num2; i++)
	{
		for (j = 2; j <= i - 1; j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d\n", i);
		}
	}

	return 0;
}