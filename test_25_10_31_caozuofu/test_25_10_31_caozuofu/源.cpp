#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (num & (1 << i))
			count++;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}



int main()
{
	int num = 1;
	int i = 0;
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}



int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	printf("%d\n", count);
	return 0;
}
//-1算的是错的，为0
//想挽救一下unsigned int n = 0;就行



