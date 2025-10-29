#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//打印数的所有元素
int main()
{
	int arr1[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}   

//输入一组数据
int main()
{
	int arr[3][5] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


int main()
{
	int arr[3][5] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}


int main()
{
	int k = 5;
	if (3 == k)
		printf("hehe\n");
	return 0;
}


int main()
{
	int a = 3;
	int b = 5;
	int c = (a == b);
	printf("%d\n", c);
	return 0;
}


int main()
{
	int a = 2;
	int b = 8;
	int c = 0;
	if (a < b < c)
		printf("haha\n");
	return 0;
}


int main()
{
	int age = 0;
	scanf("%d", &age);
	if (18 <= age && age <= 36)
		printf("青年\n");
	return 0;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	if (a > 5)
		b = -3;
	else
		b = 3;
	printf("%d", b);
	return 0;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	b = a > 5 ? 3 : -3;
	printf("%d", b);
	return 0;
}