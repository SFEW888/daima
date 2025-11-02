#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



//int main()
//{
//	int arr[3][4] = { 1,2,3,4, 2,3,4,5, 3,4,5,6 };
//	printf("%d\n", arr[2][1]);
//	return 0;
//}




//int main()
//{
//	int arr[3][4] = { 1,2,3,4, 2,3,4,5, 3,4,5,6 };
//	int i = 0;//遍历行
//	//输入
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




////int n = 13;
////00000000000000000000000000001101
////n = n >> i;
////00000000000000000000000000000011
////就这样一步步来就行
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}




//如何判断一个数是否为2的次方数
//一种2，4，8...的二进制位10，100，1000...判断有多少数只有一个1，但比较繁琐
//第二种用n&(n-1)==0判断就行

//错误代码
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d", n);
//	for (i = 0; i < 32; i++)
//	{
//	    if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	if (count = 1)
//	{
//		printf("2的次方");
//	}
//	return 0;
//}




////将13二进制序列的第5位改为1，然后改为0 
//int main()
//{
//	int n = 13;
//	//把第五位改为1
//	n |= (1 << 4);
//	printf("%d\n", n);
//
//	//把第五位改为0
//	//一种用0000000000000000000000000000001101
//	// n &= 13;
//	//后取反0000000000000000000000000000010000
//	//另一种1111111111111111111111111111101111
//	n &= (~(1 << 4));
//	printf("%d\n", n);
//	return 0;
//}




//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//只要从左往右走看最后一个数得到的值为多少，则赋值为多少
//	//尽管a>b为假，但不改变a,b,c,所以无所谓
//	printf("%d\n", c);
//	return 0;
//}




//int main()
//{
//	int arr[3][4] = { 1,2,3,4, 2,3,4,5, 3,4,5,6 };
//	int i = 0;//遍历行
//	//输入
//	for (i = 0; i < 3; i++)//产生行号
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)//产生列号
//		{
//			scanf("%d", &arr[i][j]);//输入数据
//		}
//	}
//	//输入
//	for (i = 0; i < 3; i++)//产生行号
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)//产生列号
//		{
//			printf("%d ", arr[i][j]);//输出数据
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[i];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}




int main()
{
	int arr[3][4][2] = { {{1,1},{1,2},{1,3},{1,4}},{2,1,3,4,0,5},{{3,1},{0},{1},{2,4}} };
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 2; k++)
			{
				printf("%3d ", arr[i][j][k]);

			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}