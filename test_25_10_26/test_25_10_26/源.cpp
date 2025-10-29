#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i = i + 1;
	}
	return 0;
}


int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i = i + 1;
	}
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d", i);
	}
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);
	}
	return 0;
}


int main()
{
	int i = 0;
	//循环产生100~200之间的数
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//判断2~i-1之间的数
		int j = 0;
		int flag = 1;//假设i为素数
		//flag作用是为了给一个变量，标记是不是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}


int main()
{
	int i = 0;
	//循环产生100~200之间的数
	for (i = 1; i <= 10; i++)
	{
		//判断i是否为素数
		//判断2~i-1之间的数
		int j = 0;
		int flag = 1;//假设i为素数
		//flag作用是为了给一个变量，标记是不是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}


int main()
{
	printf("hehe\n");
	goto next;
	printf("haha\n");

next:
	printf("跳过打印haha\n");
	return 0;
}